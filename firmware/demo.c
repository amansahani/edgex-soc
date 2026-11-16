/* EDGEX NPU smoke test — runs entirely on the EDGEX SoC (PicoRV32 + NPU).
 * Loads A and B into the NPU via the MMIO window, starts it, polls done,
 * reads back C and compares against the golden vector (C_EXPECT), prints
 * PASS/FAIL over the UART OUT register, and writes the magic value at
 * 0x20000000 (123456789 = pass) for the testbench.
 *
 * Build with the provided start.S + sections.lds (see scripts/build_demo.sh).
 */
#include <stdint.h>
#include "demo_vectors.h"

#define NPU_BASE         0x40000000u
#define NPU_ID           (*(volatile uint32_t *)(NPU_BASE + 0x000))
#define NPU_CTRL         (*(volatile uint32_t *)(NPU_BASE + 0x004))
#define NPU_STATUS       (*(volatile uint32_t *)(NPU_BASE + 0x004))
#define NPU_A_IDX        (*(volatile uint32_t *)(NPU_BASE + 0x008))
#define NPU_A_DATA       (*(volatile uint32_t *)(NPU_BASE + 0x00c))
#define NPU_B_IDX        (*(volatile uint32_t *)(NPU_BASE + 0x010))
#define NPU_B_DATA       (*(volatile uint32_t *)(NPU_BASE + 0x014))
#define NPU_C_IDX        (*(volatile uint32_t *)(NPU_BASE + 0x018))
#define NPU_C_DATA       (*(volatile uint32_t *)(NPU_BASE + 0x01c))

#define OUT_REG          (*(volatile uint32_t *)0x10000000u)
#define MAGIC_REG        (*(volatile uint32_t *)0x20000000u)

static void putc_(char c) { OUT_REG = (uint32_t)(unsigned char)c; }
static void puts_(const char *s) { while (*s) putc_(*s++); }

static void uart_write(const char *s) { puts_(s); }

#define NPU_ID_EXPECTED 0x00010000u
#define NPU_CTRL_START  (1u << 0)
#define NPU_CTRL_CLR    (1u << 1)
#define NPU_STATUS_DONE (1u << 0)
#define MAGIC_PASS      123456789u
#define MAGIC_FAIL      987654321u

int main(void)
{
    /* 1) ID check */
    if (NPU_ID != NPU_ID_EXPECTED) {
        uart_write("ERROR: wrong NPU id\n");
        MAGIC_REG = MAGIC_FAIL;
        __builtin_trap();
    }

    /* 2) clear any latched done */
    NPU_CTRL = NPU_CTRL_CLR;

    /* 3) write A elements (auto-incrementing index) */
    NPU_A_IDX = 0;
    for (int i = 0; i < 256; i++) NPU_A_DATA = (uint32_t)(uint8_t)A[i];

    /* 4) write B elements */
    NPU_B_IDX = 0;
    for (int i = 0; i < 256; i++) NPU_B_DATA = (uint32_t)(uint8_t)B[i];

    /* 5) start the NPU */
    NPU_CTRL = NPU_CTRL_START;

    /* 6) poll done (deterministic bound, NPU needs ~ hundreds of cycles) */
    uint32_t guard = 100000u;
    while (guard--) {
        if (NPU_STATUS & NPU_STATUS_DONE) break;
    }
    if (guard == 0) {
        uart_write("ERROR: NPU done timeout\n");
        MAGIC_REG = MAGIC_FAIL;
        __builtin_trap();
    }

    /* 7) read back C and compare against golden */
    NPU_C_IDX = 0;
    for (int i = 0; i < 256; i++) {
        uint32_t got = NPU_C_DATA;         /* auto-increments */
        if (got != (uint32_t)C_EXPECT[i]) {
            uart_write("ERROR: mismatch at ");
            /* print index as decimal */
            char buf[12]; int p = 0; int n = i;
            if (n == 0) buf[p++] = '0';
            while (n) { buf[p++] = '0' + (n % 10); n /= 10; }
            for (int j = p - 1; j >= 0; j--) putc_(buf[j]);
            putc_('\n');
            MAGIC_REG = MAGIC_FAIL;
            __builtin_trap();
        }
    }

    uart_write("EDGEX NPU DEMO PASS\n");
    MAGIC_REG = MAGIC_PASS;
    __builtin_trap();
    return 0;   /* unreachable */
}
