#include <stdio.h>

int main ()
{
    int rows, columns;
    printf("Enter Numbers Of Rows : ");
    scanf("%d", &rows);

    printf("Enter Numbers Of Columns : ");
    scanf("%d", &columns);

    int i,j;
    for (i=1; i<=rows; i++)
    {
         printf("\n");
        for (j=1; j<=columns; j++)
        {
            printf(" %d", j);
        }
    }
return 0;
}
