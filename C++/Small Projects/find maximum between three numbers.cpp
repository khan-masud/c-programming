#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3, maximum;

    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;
    cout << "Enter 3rd Number : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        maximum = num1;
        cout << "The Maximum : " << maximum;
    }
    else if (num2 > num1 && num2 > num3)
    {
        maximum = num2;
        cout << "The Maximum : " << maximum;
    }
    else if (num3 > num1 && num3 > num2)
    {
        maximum = num3;
        cout << "The Maximum : " << maximum;
    }
    else
    {
        cout << "Something is wrong.";
    }

    return 0;
}
