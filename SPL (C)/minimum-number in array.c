#include <stdio.h>

int main ()
{
    int totalNumber, numbers[10], i, minimumNumber;
    printf("Enter number of elements : ");
    scanf("%d", &totalNumber);

    for (i=0; i<totalNumber; i++)
    {
        printf("Enter %d integer values : ", totalNumber);
        scanf("%d", &numbers[i]);

    }

    minimumNumber = numbers[0];

    for (i=0; i <totalNumber; i++)
    {
         if (numbers[i]<minimumNumber)
        {
            minimumNumber = numbers[i];
        }
    }

    printf("\nThe Minimum Number : %d", minimumNumber);
}

