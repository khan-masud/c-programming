#include <iostream>
using namespace std;

void linear_search(int num[], int search); // Use prototype for better practice.
// It's a good practice for readability and to avoid potential issues in larger programs.

int main() {
    int num[5], searchingValue;

    cout << "Enter 5 values : ";
    for (int i = 0; i < 5; i++) {
        cin >> num[i]; // Input num array's values.
    }
    cout << "Enter Searching Value: "; // Input searching values.
    cin >> searchingValue;

    linear_search(num, searchingValue); // Call linear_search function and pass the values of num and search into the function.
    return 0;
}

void linear_search(int num[], int searchingValue) { // Start linear_search function and receive num and search values from main function.
    int found = 0; // Declare extra variable for making decision.

    for (int i = 0; i < 5; i++) {
        if (num[i] == searchingValue) { // Check if num value is equal to the searcing value or not.
            found = i+1; // If true, change found variable's value from 0 to i+1.
            break; // Then terminate the loop.
        }
    }

    if (!found) { // If found = 0 return true, that means searching value isn't found.
        cout << searchingValue << " isn't found.";
    } else { // If found = 0 return true, that means searching value is found.
        cout << searchingValue << " is found at " << found-1 << " index.";
    }
}

/*
##########################################

 Coded by.
 - Abdullah Al Masud
 - BSc In CSE, Dhaka International University

###########################################
*/
