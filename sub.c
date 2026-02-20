#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    char key[26] = "qwertyuiopasdfghjklzxcvbnm";
    int i;
    printf("Enter plain text: ");
    gets(text);
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = key[text[i] - 'a'];
        }
    }
    printf("Cipher text: %s", text);
    return 0;
}
