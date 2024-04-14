#include <stdio.h>

int main ()
{
    int number;

    printf("Enter Value Of N : ");
    scanf("%d", &number);

    int sum = doSum(number);
    printf("The Sum : %d", sum);
    return 0;
}

int doSum (int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return num + doSum(num-1);
    }
}
