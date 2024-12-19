/*Hello world*/

#include <stdio.h>

int plus_one(int n)
{
    return n + 1;
}

void main(void)
{
    int i = 10;
    int j;

    j = plus_one(i);

    printf("Hello world\n");
    printf("%d plus one is %d", i, j);
}