#include <stdio.h>

int main() {
    int array[6], newPosition, newValue, i;

    printf("Enter 5 Values Of Array : ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Before Insert : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nEnter New Value For Inserting : ");
    scanf("%d", &newValue);
    printf("\nEnter Position [0-5] : ");
    scanf("%d", &newPosition);

    // Shift elements to the right to make space for the new value
    for (i = 4; i >= newPosition; i--) {
        array[i + 1] = array[i];
    }
    array[newPosition] = newValue;

    printf("\n\nArray After Insert : ");
    for (i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
