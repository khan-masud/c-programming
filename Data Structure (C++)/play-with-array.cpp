#include <iostream>
using namespace std;

void insertInFirstPosition(int arr[], int& arraySize);
void insertInLastPosition(int arr[], int& arraySize);
void insertInSpecificPosition(int arr[], int& arraySize);
void deletionFunction(int arr[], int& arraySize);

void insertionFunction(int arr[], int& arraySize)
{
    char insertionChoice;
    cout << endl <<  "Choose what you want to do : " << endl;
    cout << "a. Insert element in the first position." << endl;
    cout << "b. Insert element in last position." << endl;
    cout << "c. Insert element in specific position." << endl;

    for (;;)
    {
        cout << endl << "Enter your choice : ";
        cin >> insertionChoice;

        if (insertionChoice == 'a')
        {
            insertInFirstPosition(arr, arraySize);
        }
        else if (insertionChoice == 'b')
        {
            insertInLastPosition(arr, arraySize);
        }
        else if (insertionChoice == 'c')
        {
            insertInSpecificPosition(arr, arraySize);
        }
        else
        {
            cout << "\aInvalid input. Please choose again." << endl;
        }

        // Option to exit the loop
        char continueChoice;
        cout << "Do you want to continue insertion operations? (y/n): ";
        cin >> continueChoice;
        if (continueChoice == 'n' || continueChoice == 'N')
        {
            break;
        }
    }
}

void insertInFirstPosition(int arr[], int& arraySize)
{
    cout << "Your Array : " << endl;
    for(int i = 0; i < arraySize; i++) // Print original array
    {
        cout << arr[i] << " ";
    }

    int value;
    cout << endl << "Enter your value to insert in 1st position : ";
    cin >> value; // Input the value

    for (int i = arraySize; i > 0; i--) // Right shift the elements for making space.
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = value; // Replace the first index value of array with inputted value.
    arraySize++; // Increase the array size

    cout << "Your Inserted Array : " << endl; // Print the final array
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertInLastPosition(int arr[], int& arraySize)
{
    cout << "Your Array : " << endl; // Print the original array
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }

    int value;
    cout << endl <<"Enter your value to insert in last position : ";
    cin >> value;

    arr[arraySize] = value; // Set the value at the last index
    arraySize++; // Increase the size of array

    cout << "Your Inserted Array : " << endl; // Print the final array
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertInSpecificPosition(int arr[], int& arraySize)
{
    cout << "Your Array: " << endl;
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }

    int position, value;

    for(;;)
    {
        cout << endl << "Enter the position for inserting value (0 to " << arraySize << "): ";
        cin >> position;

        if (position > arraySize || position < 0)
        {
            cout << endl << "\aInvalid input. Enter position from 0 to " << arraySize << "." << endl;
        }
        else
        {
            cout << "Enter the value for inserting in position " << position << ": ";
            cin >> value;

            // loop for shifting elements
            for (int i = arraySize; i > position-1; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[position-1] = value; // Insert the value at the specified position
            arraySize++; // Increase the array size

            cout << "Your Inserted Array: " << endl;
            for(int i = 0; i < arraySize; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break; // Break the loop after successful insertion
        }
    }
}


void deletionFunction(int arr[], int& arraySize)
{
    for (;;)
    {
    cout << "Your Array: " << endl;
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }

    int position;
    cout << endl << "Enter the position of value for deleting : ";
    cin >> position;

    for (int i = position-1; i < arraySize; i++)
    {
        arr[i] = arr[i+1];
    }
    arraySize--;

    cout << "Your Deleted Array: " << endl;
    for(int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }

    char continueChoice;
    cout << "Do you want to continue the deletion process? (y/n) ";
    cin >> continueChoice;

    if (continueChoice == 'n' || continueChoice == 'N')
    {
        break;
    }
    }
}

int main ()
{
    int choice, arraySize;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to my array game." << endl << "Here I added some basic array operations like array's element insertion and deletion. " << endl << "So let's start..."<< endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Please create an array with elements so that we can play with it. " << endl << endl;
    cout << "Enter the size of array : ";
    cin >> arraySize;

    int arr[100]; // Set the maximum size of array
    cout << "Enter " << arraySize << " elements of array : ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "Congratulations buddy! Your gaming instruments are ready. Now start your playing as you want..." << endl;
    cout << "Choose from menu : " << endl;
    cout << "[1]. Array Insertion" << endl;
    cout << "[2]. Array Deletion" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    if (choice == 1)
    {
        insertionFunction(arr, arraySize);
    }
    else if (choice == 2)
    {
        deletionFunction(arr, arraySize);
    }
    else
    {
        cout << "Invalid input. Please run the code from start.";
    }

    cout << "----------------------------------------------------------------------------" << endl << endl;
    cout <<" Thanks for using this." << endl << "Made by Abdullah Al Masud" << endl << endl;
    cout <<"----------------------------------------------------------------------------"<< endl;

    return 0;
}
