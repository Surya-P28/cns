#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[] = "Hello";
    int ch;
    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        printf("\nCharacter : %c", ch);
        printf("\nASCII     : %d", ch);
        printf("\nXOR 127   : %d", ch ^ 127);
        printf("\nAND 127   : %d", ch & 127);
        printf("\nOR 127    : %d", ch | 127);
        printf("\n");
    }
    return 0;
}
