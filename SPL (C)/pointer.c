#include <stdio.h>

int main ()
{
    int var = 100;
    int *pointer;
    pointer = &var;

    printf("Value Of Variable : %d\n", var);
     printf("Address Of Variable : %d\n", &var);
    printf("Address Of Pointer : %d\n", pointer);
    printf("Value Of Pointer : %d\n", *pointer);
}
