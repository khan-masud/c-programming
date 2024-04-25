#include <stdio.h>

int main ()
{
    int num, rows, cols, space;
    printf("Enter Numbers Of Rows and Columns : ");
    scanf("%d", &num);

    for(rows=1; rows <= num; rows++)
    {
        for (space=1; space<=(num-rows); space++)
        {
            printf(" ");
        }
        for(cols=1; cols<=rows; cols++)
        {
            printf("%d", cols);
        }
        printf("\n");
    }
}
