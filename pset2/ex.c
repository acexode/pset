#include <stdio.h>

int main(void)
{
    // display mapping for uppercase letters
    for (int i = 65; i < 65 + 26; i++)
    {
        printf("%c: %i\n", (char) i, i);
    }

    // separate uppercase from lowercase
    printf("\n");

    // display mapping for lowercase letters
    for (int i = 97; i < 97 + 26; i++)
    {
        printf("%c: %i\n", (char) i, i);
    }
}