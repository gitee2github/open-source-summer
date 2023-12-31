#define GBT32918_2_2016_A2_TEST /* For GB/T 32918.2-2016 A.2 test */
#include "sm2.h"
#include "sm2_tests.h"

const uint8 ID_A[] = "ALICE123@YAHOO.COM";
const uint8 M[] = "message digest";
const uint8 Pp[] = {
    0x85, 0x42, 0xD6, 0x9E, 
    0x4C, 0x04, 0x4F, 0x18, 
    0xE8, 0xB9, 0x24, 0x35, 
    0xBF, 0x6F, 0xF7, 0xDE, 
    0x45, 0x72, 0x83, 0x91, 
    0x5C, 0x45, 0x51, 0x7D, 
    0x72, 0x2E, 0xDB, 0x8B, 
    0x08, 0xF1, 0xDF, 0xC3, 
};
const uint8 Pa[] = {
    0x78, 0x79, 0x68, 0xB4, 
    0xFA, 0x32, 0xC3, 0xFD, 
    0x24, 0x17, 0x84, 0x2E, 
    0x73, 0xBB, 0xFE, 0xFF, 
    0x2F, 0x3C, 0x84, 0x8B, 
    0x68, 0x31, 0xD7, 0xE0, 
    0xEC, 0x65, 0x22, 0x8B, 
    0x39, 0x37, 0xE4, 0x98, 
};
const uint8 Pb[] = {
    0x63, 0xE4, 0xC6, 0xD3, 
    0xB2, 0x3B, 0x0C, 0x84, 
    0x9C, 0xF8, 0x42, 0x41, 
    0x48, 0x4B, 0xFE, 0x48, 
    0xF6, 0x1D, 0x59, 0xA5, 
    0xB1, 0x6B, 0xA0, 0x6E, 
    0x6E, 0x12, 0xD1, 0xDA, 
    0x27, 0xC5, 0x24, 0x9A, 
};
const uint8 PXG[] = {
    0x42, 0x1D, 0xEB, 0xD6, 
    0x1B, 0x62, 0xEA, 0xB6, 
    0x74, 0x64, 0x34, 0xEB, 
    0xC3, 0xCC, 0x31, 0x5E, 
    0x32, 0x22, 0x0B, 0x3B, 
    0xAD, 0xD5, 0x0B, 0xDC, 
    0x4C, 0x4E, 0x6C, 0x14, 
    0x7F, 0xED, 0xD4, 0x3D, 
};
const uint8 PYG[] = {
    0x06, 0x80, 0x51, 0x2B, 
    0xCB, 0xB4, 0x2C, 0x07, 
    0xD4, 0x73, 0x49, 0xD2, 
    0x15, 0x3B, 0x70, 0xC4, 
    0xE5, 0xD7, 0xFD, 0xFC, 
    0xBF, 0xA3, 0x6E, 0xA1, 
    0xA8, 0x58, 0x41, 0xB9, 
    0xE4, 0x6E, 0x09, 0xA2, 
};
const uint8 Pn[] = {
    0x85, 0x42, 0xD6, 0x9E, 
    0x4C, 0x04, 0x4F, 0x18, 
    0xE8, 0xB9, 0x24, 0x35, 
    0xBF, 0x6F, 0xF7, 0xDD, 
    0x29, 0x77, 0x20, 0x63, 
    0x04, 0x85, 0x62, 0x8D, 
    0x5A, 0xE7, 0x4E, 0xE7, 
    0xC3, 0x2E, 0x79, 0xB7, 
};
const uint8 PdA[] = {
    0x12, 0x8B, 0x2F, 0xA8, 
    0xBD, 0x43, 0x3C, 0x6C, 
    0x06, 0x8C, 0x8D, 0x80, 
    0x3D, 0xFF, 0x79, 0x79, 
    0x2A, 0x51, 0x9A, 0x55, 
    0x17, 0x1B, 0x1B, 0x65, 
    0x0C, 0x23, 0x66, 0x1D, 
    0x15, 0x89, 0x72, 0x63, 
};
const uint8 Pk[] = {
    0x6C, 0xB2, 0x8D, 0x99, 
    0x38, 0x5C, 0x17, 0x5C, 
    0x94, 0xF9, 0x4E, 0x93, 
    0x48, 0x17, 0x66, 0x3F, 
    0xC1, 0x76, 0xD9, 0x25, 
    0xDD, 0x72, 0xB7, 0x27, 
    0x26, 0x0D, 0xBA, 0xAE, 
    0x1F, 0xB2, 0xF9, 0x6F, 
};

int main() {
    sm2signtest(256>>3, M, ID_A, Pp, Pa, Pb, Pn, PXG, PYG, PdA, Pk);
    return 0;
}