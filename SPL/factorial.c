#include <stdio.h>
int IsFact(int num);
int main ()
{
    int number;
    printf("Enter a positive integer  : ");
    scanf("%d", &number);

    int result = IsFact(number);

    printf("The Factorial : %d", result);
    return 0;
}

 int IsFact(int num)
{
    if (num ==1)
    {
        return 1;
    }
    else
    {
        return num*IsFact(num -1);
    }

}
