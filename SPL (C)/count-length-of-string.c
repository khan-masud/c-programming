#include <stdio.h>

int main ()
{
    char name[100];
    printf("Enter Your Name : ");
    gets(name);

    int i;
    for (i=0; name[i] != '\0'; i++)
    {

    }

    printf("Your Name Has %d Letters.", i);

    return 0;
}
