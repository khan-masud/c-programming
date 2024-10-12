#include <iostream>
using namespace std;

class Member
{
public :
    string name;
    int memberID;
    int age;

    // Built a constructor
    // Constructor is a special type of function.
    // The name of constructor function must be the same as the className.
    // Passing values in constructor function is indeed.

    Member(string x, int y, int z) // This is also works fine
    {
        name = x;
        memberID = y;
        age = z;
    }

    printInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Member ID : " <<  memberID << endl;
        cout << "Age : " << age << endl << endl;
    }
};

int main ()
{
    Member Masud("Abdullah Al Masud", 1234, 21); // Passing values in constructor
    cout << "Information Of Masud : " << endl;
    cout << "-----------------------------" << endl;
    Masud.printInfo();

    Member Labonna("Moriom Nesa Labonna", 1235, 21); // Passing values in constructor
    cout << "Information Of Labonna : " << endl;
    cout << "-----------------------------" << endl;
    Labonna.printInfo();
}
