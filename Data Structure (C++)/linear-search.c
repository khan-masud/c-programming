#include <stdio.h>

void linear_search(int num[], int search); // Use prototype for better practice.
// It's a good practice for readability and to avoid potential issues in larger programs.

int main() {
    int num[5], search;

    printf("Enter 5 values: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]); // Input num array's values.
    }
    printf("Enter Searching Value: "); // Input searching values.
    scanf("%d", &search);

    linear_search(num, search); // Call linear_search function and pass the values of num and search into the function.
    return 0;
}

void linear_search(int num[], int search) { // Start linear_search function and receive num and search values from main function.
    int found = 0; // Declare extra variable for making decision.

    for (int i = 0; i < 5; i++) {
        if (num[i] == search) { // Check if num value is equal to the searcing value or not.
            found = 1; // If true, change found variable's value from 0 to 1.
            break; // Then terminate the loop.
        }
    }

    if (found == 1) { // If found = 1, that means searching value is found.
        printf("%d is found.\n", search);
    } else { // If found = 0, that means searching value is not found.
        printf("%d is not found.\n", search);
    }
}

/*
##########################################

 Coded by.
 - Abdullah Al Masud
 - BSc In CSE, Dhaka International University

###########################################
*/
