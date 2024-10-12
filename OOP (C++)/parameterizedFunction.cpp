#include <iostream>
using namespace std;

class Calculate
{
public :
    int num1;
    int num2;

    void calculation(int num1, int num2)
    {
        cout << "Addition : " << num1 + num2 << endl;
        cout << "Substruction : " << num1 - num2 << endl;
        cout << "Multiplication : " << num1 * num2 << endl;
        cout << "Division : " << num1 / num2 << endl << endl;
    }

};

int main ()
{
    Calculate giveAnyObjectName;

    cout << "Calculation for 30,20 (objectName : giveAnyObjectName)" << endl;
    cout << "-------------------------------" << endl;
    giveAnyObjectName.calculation(30,20);

    Calculate Masud;
    cout << "Calculation for 100, 10 (objectName : Masud)" << endl;
    cout << "-------------------------------" << endl;
    Masud.calculation(100,10);
}
