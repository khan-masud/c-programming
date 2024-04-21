#include <iostream>
using namespace std;

int main ()
{
    /*
    Invalid Variable Name Format Example :
    --------------------------------------------
       1. 007masud
       2. masud@gs, labonna#
       3. float, int, double, char etc (all keywords of c/c++)
       4. masud-labonna

    Valid Variable Name Format Example :
        1. Masud, labonna
        2. masud_labonna
        3. masudLabonna
        4. Masud$Labonna
        5. Float, Char, Int, Double
        6. _masud, _labonna_

    */
    int age = 21; // Integer
    float gpa = 5.00; // Float
    double cgpa = 3.99; // Double
    char letter = 'L'; // Character
    char myQueen[] = "Labonna"; // String

    // Lets print them
    cout << "My age : " << age << "\n";
    cout << "My GPA : " << gpa << "\n";
    cout << "My CGPA : " << cgpa << "\n";
    cout << "First Letter Of Her Name : " << letter << "\n";
    cout << "My Queen : " << myQueen << "\n";
}
