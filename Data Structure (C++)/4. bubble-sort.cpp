#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
int main ()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integer values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,n);
}

void bubbleSort(int arr[], int n)
{
    int i,j, flag;

    for (i = 0; i < n-1; i++)
    {
        flag = 0;
        for (j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]); // build in swap function
                /*
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                */
                 flag = 1;
            }
        }
       if (flag == 0)
        break;
    }

    cout << "Sorted Array : " << endl;
    for (i=0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
}
