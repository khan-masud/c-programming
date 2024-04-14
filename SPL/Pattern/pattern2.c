#include <stdio.h>

int main ()
{
    int rows, cols, i, num;
    printf("Enter Number Of Rows And Columns Numbers : ");
    scanf("%d", &num);

    for (rows=1; rows <=num; rows++)
    {
         printf("\n");
        for (cols=1; cols<=rows; cols++)
        {
            printf(" %d", cols%2);
        }
    }
}
