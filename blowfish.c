#include <stdio.h>
#include <stdint.h>
uint32_t P = 0x243F6A88;
uint32_t S = 0x10101010;
uint32_t F(uint32_t x)
{
    return (x ^ S) + 0x11111111;
}
void blowfish(uint32_t *L, uint32_t *R)
{
    int i;
    for (i = 0; i < 16; i++)
    {
        *L ^= P;
        *R ^= F(*L);
        uint32_t temp = *L;
        *L = *R;
        *R = temp;
    }
}
int main()
{
    uint32_t L = 0x12345678;
    uint32_t R = 0xABCDEF01;
    printf("--- Blowfish Algorithm ---\n");
    printf("Original Data: %08X %08X\n", L, R);

    blowfish(&L, &R);
    printf("Encrypted Data: %08X %08X\n", L, R);
    blowfish(&L, &R);
    printf("Decrypted Data: %08X %08X\n", L, R);
    return 0;
}
