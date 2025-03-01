#define _kbd_lang

#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.

#define SHIFT 0x80
#define ALTGR 0x40

#define BSLASH 0x64
#define BSLASH_MOD 0x00
#define PIPE 0x64
#define PIPE_MOD (1<<5)

const unsigned char ascii_to_scan_code_table[] PROGMEM = {
  0x2a,      // BS  Backspace - ASCII: 8
  0x2b,      // TAB  Tab - ASCII: 9
  0x28,      // LF  Enter - ASCII: 10
  0x00,             // VT - ASCII: 11
  0x00,             // FF - ASCII: 12
  0x00,             // CR - ASCII: 13
  0x00,             // SO - ASCII: 14
  0x00,             // SI - ASCII: 15
  0x00,             // DEL - ASCII: 16
  0x00,             // DC1 - ASCII: 17
  0x00,             // DC2 - ASCII: 18
  0x00,             // DC3 - ASCII: 19
  0x00,             // DC4 - ASCII: 20
  0x00,             // NAK - ASCII: 21
  0x00,             // SYN - ASCII: 22
  0x00,             // ETB - ASCII: 23
  0x00,             // CAN - ASCII: 24
  0x00,             // EM - ASCII: 25
  0x00,             // SUB - ASCII: 26
  0x29,             // ESC - ASCII: 27
  0x00,             // FS - ASCII: 28
  0x00,             // GS - ASCII: 29
  0x00,             // RS - ASCII: 30
  0x00,             // US - ASCII: 31
  0x2c,          //  ' ' (space) - ASCII: 32
  0x9e,          // ! - ASCII: 33
  0xb5,          // " - ASCII: 34
  0xa0,          // # - ASCII: 35
  0xa1,          // $ - ASCII: 36
  0xa2,          // % - ASCII: 37
  0xa4,    // & - ASCII: 38
  0x35,          // ' - ASCII: 39
  0xa6,    // ( - ASCII: 40
  0xa7,    // ) - ASCII: 41
  0xa5,    // * - ASCII: 42
  0xae,          // + - ASCII: 43
  0x36,          // , - ASCII: 44
  0x2d,          // - - ASCII: 45
  0x37,          // . - ASCII: 46
  0x54,    // / - ASCII: 47
  0x27,          // 0 - ASCII: 48
  0x1e,          // 1 - ASCII: 49
  0x1f,          // 2 - ASCII: 50
  0x20,          // 3 - ASCII: 51
  0x21,          // 4 - ASCII: 52
  0x22,          // 5 - ASCII: 53
  0x23,          // 6 - ASCII: 54
  0x24,          // 7 - ASCII: 55
  0x25,          // 8 - ASCII: 56
  0x26,          // 9 - ASCII: 57
  0xb8,      // : - ASCII: 58
  0x38,      // ; - ASCII: 59
  0xb6,          // < //KEY_NON_US_100 - ASCII: 60
  0x2e,      // = - ASCII: 61
  0xb7,    // > //KEY_NON_US_100 + SHIFT  - ASCII: 62
  0x1a|ALTGR,      // ? - ASCII: 63
  0x9f,      // @ - ASCII: 64
  0x84,      // A - ASCII: 65
  0x85,      // B - ASCII: 66
  0x86,      // C - ASCII: 67
  0x87,      // D - ASCII: 68
  0x88,      // E - ASCII: 69
  0x89,      // F - ASCII: 70
  0x8a,      // G - ASCII: 71
  0x8b,      // H - ASCII: 72
  0x8c,      // I - ASCII: 73
  0x8d,      // J - ASCII: 74
  0x8e,      // K - ASCII: 75
  0x8f,      // L - ASCII: 76
  0x90,      // M - ASCII: 77
  0x91,      // N - ASCII: 78
  0x92,      // O - ASCII: 79
  0x93,      // P - ASCII: 80
  0x94,      // Q - ASCII: 81
  0x95,      // R - ASCII: 82
  0x96,      // S - ASCII: 83
  0x97,      // T - ASCII: 84
  0x98,      // U - ASCII: 85
  0x99,      // V - ASCII: 86
  0x9a,      // W - ASCII: 87
  0x9b,      // X - ASCII: 88
  0x9c,      // Y - ASCII: 89
  0x9d,      // Z - ASCII: 90
  0x30,      // [ - ASCII: 91
  0x64,      // bslash  - ASCII: 92
  0x31,      // ] - ASCII: 93
  0xb4,    // ^ - ASCII: 94
  0xad,    // _ - ASCII: 95
  0xaf, 	 // ` - ASCII: 96
  0x04,          // a - ASCII: 97
  0x05,          // b - ASCII: 98
  0x06,          // c - ASCII: 99
  0x07,          // d - ASCII: 100
  0x08,          // e - ASCII: 101
  0x09,          // f - ASCII: 102
  0x0a,          // g - ASCII: 103
  0x0b,          // h - ASCII: 104
  0x0c,          // i - ASCII: 105
  0x0d,          // j - ASCII: 106
  0x0e,          // k - ASCII: 107
  0x0f,          // l - ASCII: 108
  0x10,          // m - ASCII: 109
  0x11,          // n - ASCII: 110
  0x12,          // o - ASCII: 111
  0x13,          // p - ASCII: 112
  0x14,          // q - ASCII: 113
  0x15,          // r - ASCII: 114
  0x16,          // s - ASCII: 115
  0x17,          // t - ASCII: 116
  0x18,          // u - ASCII: 117
  0x19,          // v - ASCII: 118
  0x1a,          // w - ASCII: 119
  0x1b,          // x - ASCII: 120
  0x1c,          // y - ASCII: 121
  0x1d,          // z - ASCII: 122
  0xb0,    // { - ASCII: 123
  0x64|SHIFT,  // | - ASCII: 124
  0xb1,    // } - ASCII: 125
  0x34,    // ~ - ASCII: 126
  0x00,        // DEL - ASCII: 127
/* ASCII: 128 */ 0x00,
/* ASCII: 129 */ 0x00,
/* ASCII: 130 */ 0x00,
/* ASCII: 131 */ 0x00,
/* ASCII: 132 */ 0x00,
/* ASCII: 133 */ 0x00,
/* ASCII: 134 */ 0x00,
/* ASCII: 135 */ 0xb3, // Ç
/* ASCII: 136 */ 0x00,
/* ASCII: 137 */ 0x00,
/* ASCII: 138 */ 0x00,
/* ASCII: 139 */ 0x00,
/* ASCII: 140 */ 0x00,
/* ASCII: 141 */ 0x00,
/* ASCII: 142 */ 0x00,
/* ASCII: 143 */ 0x00,
/* ASCII: 144 */ 0x00,
/* ASCII: 145 */ 0x00,
/* ASCII: 146 */ 0x00,
/* ASCII: 147 */ 0x00,
/* ASCII: 148 */ 0x00,
/* ASCII: 149 */ 0x00,
/* ASCII: 150 */ 0x00,
/* ASCII: 151 */ 0x00,
/* ASCII: 152 */ 0x00,
/* ASCII: 153 */ 0x00,
/* ASCII: 154 */ 0x00,
/* ASCII: 155 */ 0x00,
/* ASCII: 156 */ 0x00,
/* ASCII: 157 */ 0x00,
/* ASCII: 158 */ 0x00,
/* ASCII: 159 */ 0x00,
/* ASCII: 160 */ 0x00,
/* ASCII: 161 */ 0x00,
/* ASCII: 162 */ 0x00,
/* ASCII: 163 */ 0x00,
/* ASCII: 164 */ 0x00,
/* ASCII: 165 */ 0x00,
/* ASCII: 166 */ 0x00,
/* ASCII: 167 */ 0x33, // ç
/* ASCII: 168 */ 0xa3, // trema
/* ASCII: 169 */ 0x00,
/* ASCII: 170 */ 0x00,
/* ASCII: 171 */ 0x00,
/* ASCII: 172 */ 0x00,
/* ASCII: 173 */ 0x00,
/* ASCII: 174 */ 0x00,
/* ASCII: 175 */ 0x00,
/* ASCII: 178 */ 0x00,
/* ASCII: 179 */ 0x00,
/* ASCII: 180 */ 0x00,
/* ASCII: 181 */ 0x00,
/* ASCII: 182 */ 0x00,
/* ASCII: 183 */ 0x00,
/* ASCII: 184 */ 0x00,
/* ASCII: 185 */ 0x00,
/* ASCII: 186 */ 0x00,
/* ASCII: 187 */ 0x00,
/* ASCII: 188 */ 0x00,
/* ASCII: 189 */ 0x00,
/* ASCII: 190 */ 0x00,
/* ASCII: 191 */ 0x00,
/* ASCII: 192 */ 0x00,
/* ASCII: 193 */ 0x00,
/* ASCII: 194 */ 0x00,
/* ASCII: 195 */ 0x00,
/* ASCII: 196 */ 0x00,
/* ASCII: 197 */ 0x00,
/* ASCII: 198 */ 0x00,
/* ASCII: 199 */ 0x00,
/* ASCII: 200 */ 0x00,
/* ASCII: 201 */ 0x00,
/* ASCII: 202 */ 0x00,
/* ASCII: 203 */ 0x00,
/* ASCII: 204 */ 0x00,
/* ASCII: 205 */ 0x00,
/* ASCII: 206 */ 0x00,
/* ASCII: 207 */ 0x00,
/* ASCII: 208 */ 0x00,
/* ASCII: 209 */ 0x00,
/* ASCII: 210 */ 0x00,
/* ASCII: 211 */ 0x00,
/* ASCII: 212 */ 0x00,
/* ASCII: 213 */ 0x00,
/* ASCII: 214 */ 0x00,
/* ASCII: 215 */ 0x00,
/* ASCII: 216 */ 0x00,
/* ASCII: 217 */ 0x00,
/* ASCII: 218 */ 0x00,
/* ASCII: 219 */ 0x00,
/* ASCII: 220 */ 0x00,
/* ASCII: 221 */ 0x00,
/* ASCII: 222 */ 0x00,
/* ASCII: 223 */ 0x00,
/* ASCII: 224 */ 0x00,
/* ASCII: 225 */ 0x00,
/* ASCII: 226 */ 0x00,
/* ASCII: 227 */ 0x00,
/* ASCII: 229 */ 0x00,
/* ASCII: 230 */ 0x00,
/* ASCII: 231 */ 0x00
};
