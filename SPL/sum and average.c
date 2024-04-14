#include <stdio.h>

int main ()
{
    int num[10], tNum,i, sum=0;
    float avg;

    printf("Enter numbers of elements : ");
    scanf("%d", &tNum);

    for (i=1; i<=tNum; i++)
    {
        printf("\nEnter %d integter values : ", tNum);
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("The Sum : %d\n", sum);

    avg = (float) sum/tNum;
    printf("The Average : %.2f\n", avg);


    return 0;
}
