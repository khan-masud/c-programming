#include <iostream>
using namespace std;

int num, i, sum =0;
int main ()
{

    cout << "Enter Total Numbers (1 to n) : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "Sum : " << sum;

    return 0;

}
