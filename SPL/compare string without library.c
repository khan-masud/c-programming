#include <stdio.h>

int main() {
    char str1[10], str2[20];
    int equal = 1;

    printf("Enter String 1 : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String 2 : ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if (equal == 0) {
        printf("Both are not equal.\n");
    } else if (equal == 1) {
        printf("Both are equal.\n");
    }
    return 0;
}
N
