#include <stdio.h>

int main() {
    char text[100];
    int count = 0;

    printf("Enter Your Text : ");
    gets(text);

    for (int i = 0; text[i] != '\0'; i++) {
        // Check for consecutive spaces or space at the beginning of the string
        if ((text[i] == ' ' && text[i - 1] != ' ')) {
            count++;
        }
    }

    printf("Total Words : %d\n", count+1);

    return 0;
}
