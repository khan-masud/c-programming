#include <iostream>
using namespace std;

int main ()
{
    /*
    Invalid Variable Name Format Example :
    --------------------------------------------
       1. 007masud
       2. masud@gs, dreamer#
       3. float, int, double, char etc (all keywords of c/c++)
       4. masud-dreamer

    Valid Variable Name Format Example :
        1. Masud, dreamer
        2. masud_dreamer
        3. masudDreamer
        4. Masud$Dreamer
        5. Float, Char, Int, Double
        6. _masud, _dreamer_

    */
    int age = 21; // Integer
    float gpa = 5.00; // Float
    double cgpa = 3.99; // Double
    char letter = 'N'; // Character
    char myQueen[] = "Tor kono Queen nai bhai"; // String

    // Lets print them
    cout << "My age : " << age << "\n";
    cout << "My GPA : " << gpa << "\n";
    cout << "My CGPA : " << cgpa << "\n";
    cout << "First Letter Of Her Name : " << letter << "\n";
    cout << "My Queen : " << myQueen << "\n";
}
