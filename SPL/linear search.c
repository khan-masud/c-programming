#include <stdio.h>
int main ()
{
    int values[10], search, found=0, i;

    printf("Enter 5 numbers : ");
    for (i=0; i<5; i++) {
          scanf("%d", &values[i]);
    }
    printf("Enter Searching Value : ");
    scanf("%d", &search);

    for (i=0; i<5; i++)
    {
        if (values[i]==search)
            found = 1;
    }
    if (found == 1)
        {
            printf("%d is found.", search);
        }
        else if (found == 0)
        {
            printf("%d is not found. ", search);
        }
}
