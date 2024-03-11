typedef struct InstDesc_s {
  char *mnemonic;
  unsigned char opcode;
  Operands type;
} InstDesc;

const InstDesc INST[] = {
    {"un", 0x00, Empty},       {"tx", 0x01, Empty},
    {"nop", 0x02, Empty},      {"add8", 0x03, RRR},
    {"add16", 0x04, RRR},      {"add32", 0x05, RRR},
    {"add64", 0x06, RRR},      {"sub8", 0x07, RRR},
    {"sub16", 0x08, RRR},      {"sub32", 0x09, RRR},
    {"sub64", 0x0A, RRR},      {"mul8", 0x0B, RRR},
    {"mul16", 0x0C, RRR},      {"mul32", 0x0D, RRR},
    {"mul64", 0x0E, RRR},      {"and", 0x0F, RRR},
    {"or", 0x10, RRR},         {"xor", 0x11, RRR},
    {"slu8", 0x12, RRR},       {"slu16", 0x13, RRR},
    {"slu32", 0x14, RRR},      {"slu64", 0x15, RRR},
    {"sru8", 0x16, RRR},       {"sru16", 0x17, RRR},
    {"sru32", 0x18, RRR},      {"sru64", 0x19, RRR},
    {"srs8", 0x1A, RRR},       {"srs16", 0x1B, RRR},
    {"srs32", 0x1C, RRR},      {"srs64", 0x1D, RRR},
    {"cmpu", 0x1E, RRR},       {"cmps", 0x1F, RRR},
    {"diru8", 0x20, RRRR},     {"diru16", 0x21, RRRR},
    {"diru32", 0x22, RRRR},    {"diru64", 0x23, RRRR},
    {"dirs8", 0x24, RRRR},     {"dirs16", 0x25, RRRR},
    {"dirs32", 0x26, RRRR},    {"dirs64", 0x27, RRRR},
    {"neg", 0x28, RR},         {"not", 0x29, RR},
    {"sxt8", 0x2A, RR},        {"sxt16", 0x2B, RR},
    {"sxt32", 0x2C, RR},       {"addi8", 0x2D, RRx8},
    {"addi16", 0x2E, RRx16},   {"addi32", 0x2F, RRx32},
    {"addi64", 0x30, RRx64},   {"muli8", 0x31, RRx8},
    {"muli16", 0x32, RRx16},   {"muli32", 0x33, RRx32},
    {"muli64", 0x34, RRx64},   {"andi", 0x35, RRx64},
    {"ori", 0x36, RRx64},      {"xori", 0x37, RRx64},
    {"slui8", 0x38, RRu8},     {"slui16", 0x39, RRu8},
    {"slui32", 0x3A, RRu8},    {"slui64", 0x3B, RRu8},
    {"srui8", 0x3C, RRu8},     {"srui16", 0x3D, RRu8},
    {"srui32", 0x3E, RRu8},    {"srui64", 0x3F, RRu8},
    {"srsi8", 0x40, RRu8},     {"srsi16", 0x41, RRu8},
    {"srsi32", 0x42, RRu8},    {"srsi64", 0x43, RRu8},
    {"cmpui", 0x44, RRu64},    {"cmpsi", 0x45, RRs64},
    {"cp", 0x46, RR},          {"swa", 0x47, RR},
    {"li8", 0x48, Rx8},        {"li16", 0x49, Rx16},
    {"li32", 0x4A, Rx32},      {"li64", 0x4B, Rx64},
    {"lra", 0x4C, RRr32},      {"ld", 0x4D, RRu64u16},
    {"st", 0x4E, RRu64u16},    {"ldr", 0x4F, RRr32u16},
    {"str", 0x50, RRr32u16},   {"bmc", 0x51, RRu16},
    {"brc", 0x52, RRu8},       {"jmp", 0x53, r32},
    {"jal", 0x54, RRr32},      {"jala", 0x55, RRu64},
    {"jeq", 0x56, RRr16},      {"jne", 0x57, RRr16},
    {"jltu", 0x58, RRr16},     {"jgtu", 0x59, RRr16},
    {"jlts", 0x5A, RRr16},     {"jgts", 0x5B, RRr16},
    {"eca", 0x5C, Empty},      {"ebp", 0x5D, Empty},
    {"fadd32", 0x5E, RRR},     {"fadd64", 0x5F, RRR},
    {"fsub32", 0x60, RRR},     {"fsub64", 0x61, RRR},
    {"fmul32", 0x62, RRR},     {"fmul64", 0x63, RRR},
    {"fdiv32", 0x64, RRR},     {"fdiv64", 0x65, RRR},
    {"fma32", 0x66, RRRR},     {"fma64", 0x67, RRRR},
    {"fcmplt32", 0x6A, RRR},   {"fcmplt64", 0x6B, RRR},
    {"fcmpgt32", 0x6C, RRR},   {"fcmpgt64", 0x6D, RRR},
    {"itf32", 0x6E, RR},       {"itf64", 0x6F, RR},
    {"fti32", 0x70, RRu8},     {"fti64", 0x71, RRu8},
    {"fc32t64", 0x72, RR},     {"fc64t32", 0x73, RR},
    {"lra16", 0x74, RRr16},    {"ldr16", 0x75, RRr16u16},
    {"str16", 0x76, RRr16u16}, {"jmp16", 0x77, r16},
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
