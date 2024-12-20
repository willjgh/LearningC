#include <stdio.h>

// pass pointer to first array element
void timesTwo(int *a, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 2); // allows access to values of array
    }
}

// pass array
void timesThree(int a[], int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 3);
    }
}

// pass array with explicit size
void timesFour(int a[3], int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 4);
    }
}

// modify array by passing pointer
void doubleArray(int *a, int len)
{
    for (int i = 0; i < len; i++) {
        a[i] *= 2; // double element
    }
}

void printArray(int *a, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i]);
    }
}

void main(void)
{
    int a[3] = {0, 1, 4}; // array of 3 integers
    int *p; // pointer
    int *q; // pointer

    p = &a[0]; // set pointer to first element of array
    q = a; // identical to above: use array with no indexing gives pointer to first element

    printf("1st array element: %d\n", a[0]);
    printf("Dereference q: %d\n", *q); // dereferencing q gives value of 1st array element

    // multiply array elements using pointer: use array with no indexing to give pointer
    printf("\nPrint 2 times array:\n");
    timesTwo(a, 3);

    // multiply array elements using array
    printf("\nPrint 3 times array:\n");
    timesThree(a, 3);
    printf("\nPrint 4 times array:\n");
    timesFour(a, 3);

    // modify array using function
    printf("\nArray before\n");
    printArray(a, 3);

    doubleArray(a, 3); // double array via function

    printf("\nArray after\n");
    printArray(a, 3);
}