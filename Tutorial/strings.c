#include <stdio.h>

void main(void)
{
    // s is a pointer to char: the first charcter of the string 'H'
    char *s = "Hello";

    // display using %s
    printf("%s\n", s);

    // t is an array of characters
    char t[] = "Hello";

    // display each character using %c
    for (int i = 0; i < 6; i++) {
        printf("%c", t[i]);
    }
    printf("\n");

    // also works using character pointer
    for (int i = 0; i < 6; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}