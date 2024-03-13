typedef struct InstDesc_s {
    char *mnemonic;
    unsigned char opcode;
    Operands type;
} InstDesc;

const InstDesc INST[] = {
    {.opcode = 0x00, .mnemonic = "un", .type = Empty},
    {.opcode = 0x01, .mnemonic = "tx", .type = Empty},
    {.opcode = 0x02, .mnemonic = "nop", .type = Empty},
    {.opcode = 0x03, .mnemonic = "add8", .type = RRR},
    {.opcode = 0x04, .mnemonic = "add16", .type = RRR},
    {.opcode = 0x05, .mnemonic = "add32", .type = RRR},
    {.opcode = 0x06, .mnemonic = "add64", .type = RRR},
    {.opcode = 0x07, .mnemonic = "sub8", .type = RRR},
    {.opcode = 0x08, .mnemonic = "sub16", .type = RRR},
    {.opcode = 0x09, .mnemonic = "sub32", .type = RRR},
    {.opcode = 0x0A, .mnemonic = "sub64", .type = RRR},
    {.opcode = 0x0B, .mnemonic = "mul8", .type = RRR},
    {.opcode = 0x0C, .mnemonic = "mul16", .type = RRR},
    {.opcode = 0x0D, .mnemonic = "mul32", .type = RRR},
    {.opcode = 0x0E, .mnemonic = "mul64", .type = RRR},
    {.opcode = 0x0F, .mnemonic = "and", .type = RRR},
    {.opcode = 0x10, .mnemonic = "or", .type = RRR},
    {.opcode = 0x11, .mnemonic = "xor", .type = RRR},
    {.opcode = 0x12, .mnemonic = "slu8", .type = RRR},
    {.opcode = 0x13, .mnemonic = "slu16", .type = RRR},
    {.opcode = 0x14, .mnemonic = "slu32", .type = RRR},
    {.opcode = 0x15, .mnemonic = "slu64", .type = RRR},
    {.opcode = 0x16, .mnemonic = "sru8", .type = RRR},
    {.opcode = 0x17, .mnemonic = "sru16", .type = RRR},
    {.opcode = 0x18, .mnemonic = "sru32", .type = RRR},
    {.opcode = 0x19, .mnemonic = "sru64", .type = RRR},
    {.opcode = 0x1A, .mnemonic = "srs8", .type = RRR},
    {.opcode = 0x1B, .mnemonic = "srs16", .type = RRR},
    {.opcode = 0x1C, .mnemonic = "srs32", .type = RRR},
    {.opcode = 0x1D, .mnemonic = "srs64", .type = RRR},
    {.opcode = 0x1E, .mnemonic = "cmpu", .type = RRR},
    {.opcode = 0x1F, .mnemonic = "cmps", .type = RRR},
    {.opcode = 0x20, .mnemonic = "diru8", .type = RRRR},
    {.opcode = 0x21, .mnemonic = "diru16", .type = RRRR},
    {.opcode = 0x22, .mnemonic = "diru32", .type = RRRR},
    {.opcode = 0x23, .mnemonic = "diru64", .type = RRRR},
    {.opcode = 0x24, .mnemonic = "dirs8", .type = RRRR},
    {.opcode = 0x25, .mnemonic = "dirs16", .type = RRRR},
    {.opcode = 0x26, .mnemonic = "dirs32", .type = RRRR},
    {.opcode = 0x27, .mnemonic = "dirs64", .type = RRRR},
    {.opcode = 0x28, .mnemonic = "neg", .type = RR},
    {.opcode = 0x29, .mnemonic = "not", .type = RR},
    {.opcode = 0x2A, .mnemonic = "sxt8", .type = RR},
    {.opcode = 0x2B, .mnemonic = "sxt16", .type = RR},
    {.opcode = 0x2C, .mnemonic = "sxt32", .type = RR},
    {.opcode = 0x2D, .mnemonic = "addi8", .type = RRx8},
    {.opcode = 0x2E, .mnemonic = "addi16", .type = RRx16},
    {.opcode = 0x2F, .mnemonic = "addi32", .type = RRx32},
    {.opcode = 0x30, .mnemonic = "addi64", .type = RRx64},
    {.opcode = 0x31, .mnemonic = "muli8", .type = RRx8},
    {.opcode = 0x32, .mnemonic = "muli16", .type = RRx16},
    {.opcode = 0x33, .mnemonic = "muli32", .type = RRx32},
    {.opcode = 0x34, .mnemonic = "muli64", .type = RRx64},
    {.opcode = 0x35, .mnemonic = "andi", .type = RRx64},
    {.opcode = 0x36, .mnemonic = "ori", .type = RRx64},
    {.opcode = 0x37, .mnemonic = "xori", .type = RRx64},
    {.opcode = 0x38, .mnemonic = "slui8", .type = RRu8},
    {.opcode = 0x39, .mnemonic = "slui16", .type = RRu8},
    {.opcode = 0x3A, .mnemonic = "slui32", .type = RRu8},
    {.opcode = 0x3B, .mnemonic = "slui64", .type = RRu8},
    {.opcode = 0x3C, .mnemonic = "srui8", .type = RRu8},
    {.opcode = 0x3D, .mnemonic = "srui16", .type = RRu8},
    {.opcode = 0x3E, .mnemonic = "srui32", .type = RRu8},
    {.opcode = 0x3F, .mnemonic = "srui64", .type = RRu8},
    {.opcode = 0x40, .mnemonic = "srsi8", .type = RRu8},
    {.opcode = 0x41, .mnemonic = "srsi16", .type = RRu8},
    {.opcode = 0x42, .mnemonic = "srsi32", .type = RRu8},
    {.opcode = 0x43, .mnemonic = "srsi64", .type = RRu8},
    {.opcode = 0x44, .mnemonic = "cmpui", .type = RRu64},
    {.opcode = 0x45, .mnemonic = "cmpsi", .type = RRs64},
    {.opcode = 0x46, .mnemonic = "cp", .type = RR},
    {.opcode = 0x47, .mnemonic = "swa", .type = RR},
    {.opcode = 0x48, .mnemonic = "li8", .type = Rx8},
    {.opcode = 0x49, .mnemonic = "li16", .type = Rx16},
    {.opcode = 0x4A, .mnemonic = "li32", .type = Rx32},
    {.opcode = 0x4B, .mnemonic = "li64", .type = Rx64},
    {.opcode = 0x4C, .mnemonic = "lra", .type = RRr32},
    {.opcode = 0x4D, .mnemonic = "ld", .type = RRu64u16},
    {.opcode = 0x4E, .mnemonic = "st", .type = RRu64u16},
    {.opcode = 0x4F, .mnemonic = "ldr", .type = RRr32u16},
    {.opcode = 0x50, .mnemonic = "str", .type = RRr32u16},
    {.opcode = 0x51, .mnemonic = "bmc", .type = RRu16},
    {.opcode = 0x52, .mnemonic = "brc", .type = RRu8},
    {.opcode = 0x53, .mnemonic = "jmp", .type = r32},
    {.opcode = 0x54, .mnemonic = "jal", .type = RRr32},
    {.opcode = 0x55, .mnemonic = "jala", .type = RRu64},
    {.opcode = 0x56, .mnemonic = "jeq", .type = RRr16},
    {.opcode = 0x57, .mnemonic = "jne", .type = RRr16},
    {.opcode = 0x58, .mnemonic = "jltu", .type = RRr16},
    {.opcode = 0x59, .mnemonic = "jgtu", .type = RRr16},
    {.opcode = 0x5A, .mnemonic = "jlts", .type = RRr16},
    {.opcode = 0x5B, .mnemonic = "jgts", .type = RRr16},
    {.opcode = 0x5C, .mnemonic = "eca", .type = Empty},
    {.opcode = 0x5D, .mnemonic = "ebp", .type = Empty},
    {.opcode = 0x5E, .mnemonic = "fadd32", .type = RRR},
    {.opcode = 0x5F, .mnemonic = "fadd64", .type = RRR},
    {.opcode = 0x60, .mnemonic = "fsub32", .type = RRR},
    {.opcode = 0x61, .mnemonic = "fsub64", .type = RRR},
    {.opcode = 0x62, .mnemonic = "fmul32", .type = RRR},
    {.opcode = 0x63, .mnemonic = "fmul64", .type = RRR},
    {.opcode = 0x64, .mnemonic = "fdiv32", .type = RRR},
    {.opcode = 0x65, .mnemonic = "fdiv64", .type = RRR},
    {.opcode = 0x66, .mnemonic = "fma32", .type = RRRR},
    {.opcode = 0x67, .mnemonic = "fma64", .type = RRRR},
    // 68, 69?
    {.opcode = 0x6A, .mnemonic = "fcmplt32", .type = RRR},
    {.opcode = 0x6B, .mnemonic = "fcmplt64", .type = RRR},
    {.opcode = 0x6C, .mnemonic = "fcmpgt32", .type = RRR},
    {.opcode = 0x6D, .mnemonic = "fcmpgt64", .type = RRR},
    {.opcode = 0x6E, .mnemonic = "itf32", .type = RR},
    {.opcode = 0x6F, .mnemonic = "itf64", .type = RR},
    {.opcode = 0x70, .mnemonic = "fti32", .type = RRu8},
    {.opcode = 0x71, .mnemonic = "fti64", .type = RRu8},
    {.opcode = 0x72, .mnemonic = "fc32t64", .type = RR},
    {.opcode = 0x73, .mnemonic = "fc64t32", .type = RR},
    {.opcode = 0x74, .mnemonic = "lra16", .type = RRr16},
    {.opcode = 0x75, .mnemonic = "ldr16", .type = RRr16u16},
    {.opcode = 0x76, .mnemonic = "str16", .type = RRr16u16},
    {.opcode = 0x77, .mnemonic = "jmp16", .type = r16},
};

const size_t INST_CNT = sizeof(INST) / sizeof(INST[0]);
size_t inst_find(const char *mnemonic, size_t len) {
    for (size_t ii = 0; ii < INST_CNT; ii += 1) {
        const char *entry = INST[ii].mnemonic;
        if (strncmp(entry, mnemonic, len) == 0 && entry[len] == '\0') {
            return ii;
        }
    }
    return INVALID;
}
