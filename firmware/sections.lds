OUTPUT_ARCH(riscv)
ENTRY(_start)

SECTIONS
{
    . = 0x00000000;
    .text.init : { *(.text.init) }
    .text      : { *(.text*) }
    .rodata    : { *(.rodata*) }
    .srodata   : { *(.srodata*) }
    .data      : { *(.data*) }
    .sdata     : { *(.sdata*) }
    .bss       : { *(.sbss*) *(.bss*) }

    /* stack below 0x10_0000 */
    . = 0x00010000;
    __stack_top = .;
}
