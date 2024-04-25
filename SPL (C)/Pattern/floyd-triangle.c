#include <stdio.h>

int main ()
{
    int rows, cols, count=0, input;

    printf("Enter Input : ");
    scanf("%d", &input);

    for(rows=1; rows<=input; rows++)
    {
        for (cols=1; cols<=rows; cols++)
        {
            printf("%d ", ++count);
        }
        printf("\n");
    }
}
