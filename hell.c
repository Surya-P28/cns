#include <stdio.h>
long long modexp(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}
int main()
{
    long long p = 23;
    long long g = 5;
    long long a, b;
    long long A, B;
    long long keyA, keyB;
    printf("Diffie-Hellman Key Exchange Demonstration\n");
    printf("Public values: p = %lld, g = %lld\n", p, g);
    printf("Enter Alice private key (a): ");
    scanf("%lld", &a);
    printf("Enter Bob private key (b): ");
    scanf("%lld", &b);
    A = modexp(g, a, p);
    B = modexp(g, b, p);
    printf("Alice sends public key A = %lld\n", A);
    printf("Bob sends public key B = %lld\n", B);
    keyA = modexp(B, a, p);
    keyB = modexp(A, b, p);
    printf("Alice's shared key = %lld\n", keyA);
    printf("Bob's shared key = %lld\n", keyB);
    if (keyA == keyB)
        printf("Shared secret key successfully generated!\n");
    else
        printf("Error: Keys do not match!\n");
    return 0;
}
