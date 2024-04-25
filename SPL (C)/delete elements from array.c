#include <stdio.h>

int main() {
    int array[6], deletePosition, i;

    printf("Enter 5 Values Of Array : ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Before Delete : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    printf("\nEnter Deleted Position [0-4] : ");
    scanf("%d", &deletePosition);

    // Shift elements to the left to overwrite the deleted element
    for (i = deletePosition; i < 5 - 1; i++) {
        array[i] = array[i + 1];
    }

    printf("\n\nArray After Delete : ");
    for (i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
