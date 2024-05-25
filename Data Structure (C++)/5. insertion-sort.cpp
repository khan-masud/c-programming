#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);
int  main ()
{
    int n;
    cout << "Enter the total number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " number of integer number : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    return 0;
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i -1;

        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
