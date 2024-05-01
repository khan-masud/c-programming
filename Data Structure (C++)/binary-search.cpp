#include <iostream>
using namespace std;

int binarySearch(int arr[], int searchingValue, int n);
int main ()
{
    int n;

    cout << "Enter numbers of elements : ";
    cin >> n;

    int arr[n], searchingValue;

    cout << "Enter " << n << " sorted integer values : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter searching value : ";
    cin >> searchingValue;
    int returnedValue = binarySearch(arr, searchingValue, n);

    if (returnedValue == -1) {
        cout << searchingValue << " is not found.";
    }
    else {
        cout << searchingValue << " is found at index " << returnedValue  << ".";
    }
    return 0;
}

int binarySearch(int arr[], int searchingValue, int n)
{
    int left = 0;
    int right = n - 1;
    int mid;


    while (left <= right) {
        mid = (left + right) / 2;
        if (searchingValue == arr[mid])
        {
            return mid;
        }
        else if (searchingValue > arr[mid])
        {
            left = mid + 1;
        }
        else if (searchingValue < arr[mid])
        {
            right = mid - 1;
        }
    }
    return -1;
}
