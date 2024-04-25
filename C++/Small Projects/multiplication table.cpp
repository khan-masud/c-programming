#include <iostream>
using namespace std;

int num, i;
int main ()
{
    cout << "Enter Any Positive Integer : ";
    cin >> num;

    for (i=1; i<=10; i++)
    {
        int multiplication = num * i;
        cout << num << " * " << i << " = " << multiplication << endl;
        multiplication = 0; //Reset the value of multiplication for next iterate.
    }

    return 0;
}
