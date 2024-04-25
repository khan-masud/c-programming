#include <stdio.h>

int main ()
{
    int rows, cols, input, space;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d", &input);

    for (rows=1; rows<=input; rows++)
    {
        for (space=1; space<=input-rows; space++)
        {
            printf("  ");
        }
        for (cols=1; cols<=rows*2-1; cols++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (rows=input-1; rows >= 1; rows--)
    {
            for (space=1; space<=input-rows; space++ )
            {
             printf("  ");
            }
            for (cols=1; cols<=rows*2-1; cols++)
            {
                printf("* ");
            }
            printf("\n");
}
}
