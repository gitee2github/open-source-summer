#define SECGEAR_ZUC_DEBUG
#include <stdio.h>
#include "zuc.h"

uint8 k_test1[16] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
uint8 iv_test1[16] = {
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};

uint8 k_test2[16] = {
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
};
uint8 iv_test2[16] = {
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF,
};

uint8 k_test3[16] = {
    0x3D, 0x4C, 0x4B, 0xE9,
    0x6A, 0x82, 0xFD, 0xAE,
    0xB5, 0x8F, 0x64, 0x1D,
    0xB1, 0x7B, 0x45, 0x5B,
};
uint8 iv_test3[16] = {
    0x84, 0x31, 0x9A, 0xA8,
    0xDE, 0x69, 0x15, 0xCA,
    0x1F, 0x6B, 0xDA, 0x6B,
    0xFB, 0xD8, 0xC7, 0x66,
};

void zuc_test(uint8 k[], uint8 iv[]) {
    const size_t LEN = 32;
    uint32 keys[LEN];
    zuc_final(k, iv, keys, LEN);
}

int main(){
    printf("Test 1: \n");
    zuc_test(k_test1, iv_test1);
    printf("Test 2: \n");
    zuc_test(k_test2, iv_test2);
    printf("Test 3: \n");
    zuc_test(k_test3, iv_test3);
    return 0;
}