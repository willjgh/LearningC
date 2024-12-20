#include <stdio.h>

// pass a pointer as an argument, pointer available in the function is local copy BUT still points to the same variable
int increment(int *p)
{
    int j = *p; // dereference pointer to access value of variable it points to
    *p = j + 1; // increment value of dereference
    // identical to *p = *p + 1;
}

int doubleValue(int *p)
{
    return *p * 2; // deref pointer to get value, double and return
}

int main(void)
{

    int i; // integer variable
    int *p; // pointer to integer variable

    p = &i; // assign p the value: memory address of i

    i = 10; // assign i the value: 10

    *p = 20; // 'de-reference' p to get i: use pointer p as a 'reference' to i and change its value to 20

    printf("Value of i: %d\n", i); // value of i
    printf("Dereferenced p: %d\n", *p); // dereferenced p value

    printf("Address of i: %p\n", &i); // address of i
    printf("Value of pointer p: %p\n", p); // value of p

    printf("i is still %d\n", i); // value of i
    increment(p); // increment by passing pointer as argument: could also directly use &i as an argument (no need to previously declare pointer p)
    printf("i is now %d\n", i); // value of i

    int j = 2;
    int k;
    int *q = &j;

    printf("j = %d\n", j);
    k = doubleValue(q);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

}