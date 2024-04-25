#include <iostream>
using namespace std;
int linearSearch(int numbers[]);
int main ()
{
    int total;

    cout << "Enter total numbers of elements of array : ";
    cin >> total;

    int numbers[total];
    cout << "Enter " << total << " numbers : ";

    for (int i = 0; i < total ; i++)
    {
        cin >> numbers[i]; // Input numbers values as array
    }
    // There some errors in this code. I will fix that later.
    int returnValue[] = linearSearch(numbers); // Call search function
    int searchValue = returnValue[0]; // Store search value in another variable for easy access
    int indexNumber = returnValue[1]; // Store index number in another variable for easy access
}

int linearSearch(int numbers)
{
    int searchValue, passValues[];
    cout << "Enter Searching Value : ";
    cin >> searchValue;

    for (int i = 0; i < total; i++)
    {
        if (searchValue == numbers[i])
            {
                passValues[0] = searchValue;
                passValues[1] = i;

                return  passValues[]; // Return searching value and index number to the main function
           }
    }

    return 0;
}
