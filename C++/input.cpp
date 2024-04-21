#include <iostream>
using namespace std;

int main ()
{
    char name[32];
    char motherName[32];
    char fatherName[32];
    int age;

    cout << "Enter Your Name : ";
    cin >> name; // Input Name
    cout << "Enter You Mother's Name : ";
    cin >> motherName; // Input Mother Name
    cout << "Enter Your Father's Name : ";
    cin >> fatherName; // Input Father Name
    cout << "Enter You Age : ";
    cin >> age; // Input Age

    cout << "\n\nYour Entered Data : \n";
    cout << name << " ; " << motherName << " ; " << fatherName << " ; " << age;


    // We can also take input in single line.
    int num1, num2, num3;

    cout << "\n\n\nEnter Three Numbers : ";
    cin >> num1 >> num2 >> num3;

    cout << "Entered Numbers : " << num1 << ',' << num2 << ',' << num3;

    /*

    cout = c out ---> It is used for printing in c++
    cin = c in ---> It is used for taking input from user in c++

    */
}
