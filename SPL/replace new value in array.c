#include <stdio.h>

int main ()
{
    int array[5], newPosition, newValue, i;

    printf("Enter 5 Values Of Array : ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Before Insert : ");
     for (i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\nEnter New Value For Inserting : ");
    scanf("%d", &newValue);
    printf("\nEnter Position [0-4] :");
    scanf("%d", &newPosition);

    array[newPosition] = newValue;

    printf("\n\nArray After Insert : ");
     for (i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
