#define GBT32918_5_2017_TEST
#define SM2_EXCHANGE_OPTIONAL
#include "sm2.h"
#include "sm2_tests.h"

/*
 * Ref: 
 * GB/T 32918.5-2017
 */

const int SM2_p_bytes = 256 >> 3;
const uint8 sign_ID_A[] = "1234567812345678";
const uint8 sign_M[] = "message digest";
const uint8 sign_dA[] = {
    0x39, 0x45, 0x20, 0x8F, 
    0x7B, 0x21, 0x44, 0xB1, 
    0x3F, 0x36, 0xE3, 0x8A, 
    0xC6, 0xD3, 0x9F, 0x95, 
    0x88, 0x93, 0x93, 0x69, 
    0x28, 0x60, 0xB5, 0x1A, 
    0x42, 0xFB, 0x81, 0xEF, 
    0x4D, 0xF7, 0xC5, 0xB8, 
};
const uint8 sign_k[] = {
    0x59, 0x27, 0x6E, 0x27, 
    0xD5, 0x06, 0x86, 0x1A, 
    0x16, 0x68, 0x0F, 0x3A, 
    0xD9, 0xC0, 0x2D, 0xCC, 
    0xEF, 0x3C, 0xC1, 0xFA, 
    0x3C, 0xDB, 0xE4, 0xCE, 
    0x6D, 0x54, 0xB8, 0x0D, 
    0xEA, 0xC1, 0xBC, 0x21, 
};

const uint8 exchange_ID_A[] = "1234567812345678";
const uint8 exchange_ID_B[] = "1234567812345678";
const uint8 exchange_dA[] = {
    0x81, 0xEB, 0x26, 0xE9, 
    0x41, 0xBB, 0x5A, 0xF1, 
    0x6D, 0xF1, 0x16, 0x49, 
    0x5F, 0x90, 0x69, 0x52, 
    0x72, 0xAE, 0x2C, 0xD6, 
    0x3D, 0x6C, 0x4A, 0xE1, 
    0x67, 0x84, 0x18, 0xBE, 
    0x48, 0x23, 0x00, 0x29, 
};
const uint8 exchange_dB[] = {
    0x78, 0x51, 0x29, 0x91, 
    0x7D, 0x45, 0xA9, 0xEA, 
    0x54, 0x37, 0xA5, 0x93, 
    0x56, 0xB8, 0x23, 0x38, 
    0xEA, 0xAD, 0xDA, 0x6C, 
    0xEB, 0x19, 0x90, 0x88, 
    0xF1, 0x4A, 0xE1, 0x0D, 
    0xEF, 0xA2, 0x29, 0xB5, 
};
const uint64 exchange_klen = 128;

const uint8 crypt_M[] = "encryption standard";
const uint8 crypt_dB[] = {
    0x39, 0x45, 0x20, 0x8F, 
    0x7B, 0x21, 0x44, 0xB1, 
    0x3F, 0x36, 0xE3, 0x8A, 
    0xC6, 0xD3, 0x9F, 0x95, 
    0x88, 0x93, 0x93, 0x69, 
    0x28, 0x60, 0xB5, 0x1A, 
    0x42, 0xFB, 0x81, 0xEF, 
    0x4D, 0xF7, 0xC5, 0xB8, 
};

int main(){
    printf("A.2 start: \n");
    sm2signtest(SM2_p_bytes, sign_M, sign_ID_A, SM2_P, SM2_A, SM2_B, SM2_N, SM2_XG, SM2_YG, sign_dA, sign_k);
    printf("A.2 end: \n\n\n");
    /* PASSED */

    printf("B.2 start: \n");
    sm2exchangetest(SM2_p_bytes, exchange_ID_A, exchange_ID_B, SM2_P, SM2_A, SM2_B, SM2_N, SM2_XG, SM2_YG, exchange_dA, exchange_dB, exchange_klen);
    printf("B.2 end: \n\n\n");
    /* PASSED */

    printf("C.2 start: \n");
    sm2crypttest(SM2_p_bytes, crypt_M, SM2_P, SM2_A, SM2_B, SM2_N, SM2_XG, SM2_YG, crypt_dB);
    printf("C.2 end: \n\n\n");
    /* PASSED */
    return 0;
}