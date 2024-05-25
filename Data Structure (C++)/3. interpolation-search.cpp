#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int searchingValue);
int main()
{
        int n;

        cout << "Enter numbers of elements : ";
        cin >> n;

        int arr[n];

        cout << "Enter " << n << " numbers of sorted integer  number : ";
        for (int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }

        int searchingValue;
        cout << "Enter searching value : ";
        cin >> searchingValue;

        int index = interpolationSearch(arr, n, searchingValue);

        if (index == -1) {
            cout << searchingValue << " is not found in array";
        }

        else {
            cout << searchingValue << " is found at " << index << " index";
        }

        return 0;
}



int interpolationSearch(int arr[], int n, int searchingValue)
{
        int low = 0, high = n - 1;

        while (low <=high && searchingValue >= arr[low] && searchingValue <= high) {
            if (low == high) {
                if (arr[low] == searchingValue) return low;
                    return -1;
            }

            int position = low + ((double)(searchingValue - arr[low]) / (arr[high] - arr[low])) * (high - low);

            if (arr[position] == searchingValue)
                return position;

            else if (arr[position] < searchingValue)
                low = position + 1;

            else if (arr[position] > searchingValue)
                high = position -1;
        }

        return -1;

}
