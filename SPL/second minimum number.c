#include <stdio.h>

int main ()
{
    int min, secMin,i, size, array[10];

    printf("Total numbers of elements : ");
    scanf("%d", &size);

    printf("Enter %d elements of array : ", size);
    for (i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    if (array[0] < array[1])
    {
        min = array[0];
        secMin = array[1];
    }
    else
    {
        min = array[1];
        secMin = array[0];
    }

    for (i=2; i<size; i++)
    {
        if (array[i]<min)
        {
            secMin = min;
            min = array[i];
        }
        else if (array[i] < secMin && array[i] != min)
        {
            secMin = array[i];
        }
    }

    printf("The Second Minimum Number : %d", secMin);
}
