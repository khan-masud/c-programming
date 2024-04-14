#include <stdio.h>
int armstrong(int num);
int main ()
{
    int number, returnSum;
    printf("Enter a positive integer : ");
    scanf("%d", &number);
    returnSum = armstrong(number);

    if (returnSum==number)
    {
        printf("%d is an Amrstrong Number.", number);
    }
    else
    {
        printf("%d is not an Amrstrong Number.", number);
    }
}

int armstrong(int num)
{
    int sum=0;
    for (int i = 1; num != 0; i++)
        {
         int digit = num % 10;
          int qube = digit * digit * digit;
        sum += qube;
        num /= 10;
        }
        return sum;
}
