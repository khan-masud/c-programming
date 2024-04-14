#include <stdio.h>

int main ()
{
    int array[10], total, i;

    printf("Enter number of total elements of array : ");
    scanf("%d", &total);
    printf("Enter %d numbers : ", total);
    for (i=0; i<total; i++)
        {
            scanf("%d", &array[i]);
        }

    printf("The Reverse Series : ");
    for (i=total - 1; i>=0; i--)
    {
        printf("%d ", array[i]);
    }
}
