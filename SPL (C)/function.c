#include <stdio.h>

int main ()
{
    int num1, num2, swapped;

    printf("Enter Value Of Two Numbers : ");
    scanf("%d %d", &num1, &num2);

    swapNumber(&num1, &num2);
}

void swapNumber(int *number1, int *number2)
{
   int temp = *number1;
   *number1 = *number2;
   *number2 = temp;

   printf("Swapped Number : %d %d", *number1, *number2);
}

