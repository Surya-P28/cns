#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "we meet after this party";
    char str1[150];
    int i, k = 3;
    int len = strlen(str);
    printf("The plaintext is:\n");
    printf("%s\n", str);
    printf("The cipher text is:\n");
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str1[i] = ((str[i] - 'a' + k) % 26) + 'a';
        else if (str[i] == ' ')
            str1[i] = ' ';
    }
    str1[len] = '\0';
    printf("%s\n", str1);
    printf("The decrypted text is:\n");
    for (i = 0; i < len; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            str1[i] = ((str1[i] - 'a' - k + 26) % 26) + 'a';
        else if (str1[i] == ' ')
            str1[i] = ' ';
    }
    printf("%s\n", str1);
    return 0;
}
