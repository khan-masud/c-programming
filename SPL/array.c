#include <stdio.h>

int main ()
{
    int values[10];

    for (int i = 0; i<5; i++)
    {
         printf("Enter Values Of Value[%d] : ", i+1);
         scanf("%d", &values[i]);
    }

    printf("\nEnterd Values : ");
     for (int i = 0; i<5; i++)
    {
         printf("%d ", values[i]);
    }
}
