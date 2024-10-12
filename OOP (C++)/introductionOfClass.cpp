#include <iostream>
using namespace std;

class Friend   // class <class_name>
{
    public : // Declare the type of class. By default it is private.
        string name;
        int phoneNumber;

        void printInfo ()
        {
            cout << "These informations are printing from printInfo function..." <<endl;
            cout << "Full Name : " << name << endl;
            cout << "Phone Number : " << phoneNumber << endl << endl;
        }
};

int main()
{
    Friend Zihak; // Object declaration named Zihak
    Zihak.name = "Foysal Mahmud Zihak";
    Zihak.phoneNumber = 01777777777;

    Friend Labonna; // Object declaration named Labonna
    Labonna.name = "Moriom Nesa Labonna";
    Labonna.phoneNumber = 016666666666;

    cout << "Information Of Zihak : " << endl;
    cout << "-----------------------------" << endl;
    cout << "Full Name : " << Zihak.name << endl;
    cout << "Phone Number : " << Zihak.phoneNumber << endl << endl;
    // We can do this printing by printInfo function
    Zihak.printInfo();

    cout << "Information Of Labonna : " << endl;
    cout << "-----------------------------" << endl;
    cout << "Full Name : " << Labonna.name << endl;
    cout << "Phone Number : " << Labonna.phoneNumber << endl << endl;
    // We can do this printing by printInfo function
    Labonna.printInfo();

}
