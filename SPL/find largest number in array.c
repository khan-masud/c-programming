#include <stdio.h>

int main ()
{
    int totalNumber, numbers[10], i, maximumNumber;
    printf("Enter number of elements : ");
    scanf("%d", &totalNumber);

    for (i=0; i<totalNumber; i++)
    {
        printf("Enter %d integer values : ", totalNumber);
        scanf("%d", &numbers[i]);

    }

    maximumNumber = numbers[0];

    for (i=0; i <totalNumber; i++)
    {
         if (numbers[i]>maximumNumber)
        {
            maximumNumber = numbers[i];
        }
    }

    printf("The Maximum Number : %d", maximumNumber);
}
