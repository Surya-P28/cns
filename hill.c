#include <stdio.h>
#define MOD 26
int main()
{
    int key[2][2] = {{3, 3}, {2, 5}};
    char pt[] = "HELP";
    int i;
    printf("Plaintext: %s\n", pt);
    printf("Ciphertext: ");
    for (i = 0; i < 4; i += 2)
    {
        int c1 = (key[0][0] * (pt[i] - 'A') + key[0][1] * (pt[i + 1] - 'A')) % MOD;
        int c2 = (key[1][0] * (pt[i] - 'A') + key[1][1] * (pt[i + 1] - 'A')) % MOD;
        printf("%c%c", c1 + 'A', c2 + 'A');
    }
    printf("\n");
    return 0;
}
