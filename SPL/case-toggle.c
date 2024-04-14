#include <stdio.h>

int main ()
{
    char text[100];
    int i;

    printf("Enter A Text To Toggle : ");
    gets(text);

    for (i=0;text[i] != '\0'; i++)
    {
        if (text[i] >= 65 && text[i] <= 90)
        {
            text[i] = text[i] + 32;
        }
        else if (text[i] >= 97 && text[i] <= 122)
        {
            text[i] = text[i] - 32;
        }
    }

    printf("Toggled Text : %s", text);

    return 0;
}
