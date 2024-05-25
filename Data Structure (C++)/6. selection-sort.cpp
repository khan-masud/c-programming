#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);
int main ()
{
    int n;
    cout << "Enter total number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " number of integer number : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);

    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minimum = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        if(minimum != i)
        {
            swap(arr[i], arr[minimum]);
        }
    }

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
