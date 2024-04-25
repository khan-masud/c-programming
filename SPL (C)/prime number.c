#include <stdio.h>

int main ()
{
    int number;
    printf("Enter a positive integer : ");
    scanf("%d", &number);
    isPrime(&number);

    return 0;
}

void isPrime(int *num)
{
    int flag = 0;
    if (*num <=1)
    {
        flag=1;
    }
    else
    {
        for (int i=2; i<=*num/2; i++)
        {
            if (*num % i == 0 || *num <=1)
            {
                flag = 1;
                break;
            }
        }

    }
    if (flag==1)
    {
        printf("This is not a prime number.");
    }
    else if (flag == 0)
    {
        printf("This is a prime number.");
    }
}
