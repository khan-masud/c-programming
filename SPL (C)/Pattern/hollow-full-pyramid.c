#include <stdio.h>

int main ()
{
    int rows, cols, input, space;

    printf("Enter Input : ");
    scanf("%d", &input);

    for (rows=1; rows<=input; rows++)
    {
       for (space=1; space<=input-rows; space++)
       {
            printf(" ");
       }
       for (cols=1; cols<=rows; cols++)
       {
           printf("*");
       }
       for (cols=rows-1; cols>=1; cols--)
       {
           printf("*");
       }
       printf("\n");
    }
}
