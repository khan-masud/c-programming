#include <iostream>
#include <iomanip>
using namespace std;

/*

showpoint--> It uses for showing numbers after decimal points for float data types. By default it shows 6 numbers in total after and before decimal point.
noshowpoint --> It uses for if you don't want to show decimal point.
setprecision(value) --> It uses to set the total numbers of float type data. For using this command we have to declare header file <iomanip>.
fixed --> It uses to change the total numbers after decimal point only. We have to declare it the before of using 'setprecision'.
setw --> It uses to define the total width of specific output.

*/
int main ()
{
    float num1, num2;

    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2; // Input 2 numbers.
    cout << endl; // endl generally uses for printing a new line.

    cout << "By default result : ";
    cout << endl; //Print a new line.
    cout << "Addition : " << num1 + num2 << "\n";
    cout << "Subtraction : " << num1 - num2 << "\n";
    cout << "Multiplication : " << num1 * num2 << "\n";
    cout << "Division : " << num1 / num2 << "\n";
    cout << endl << endl; // Create double new line

    cout << "Result of showpoint command : ";
    cout << endl; //Print a new line.
    cout << showpoint; // declare showpoint
    cout << "Addition : " << num1 + num2 << "\n";
    cout << "Subtraction : " << num1 - num2 << "\n";
    cout << "Multiplication : " << num1 * num2 << "\n";
    cout << "Division : " << num1 / num2 << "\n"  << endl << endl;
    // Remainder is only possible for integer type data.

    cout << "Result of noshowpoint command : ";
    cout << noshowpoint; // After that line there will no digits after decimal point. Values will output as an integer.
    cout << endl; //Print a new line.
    cout << "Addition : " << num1 + num2 << "\n";
    cout << "Subtraction : " << num1 - num2 << "\n";
    cout << "Multiplication : " << num1 * num2 << "\n";
    cout << "Division : " << num1 / num2 << "\n"; // For divider operation, in output there will show decimal point as by default result. noshowpoint won't any effect on it.
    cout << endl << endl; // Create double new line

    cout << "Result of setprecision(5) : "; // Good to know : setprecision is a function.
    cout << endl;
    cout << showpoint; // To show point in result. Because we used noshowpoint in the code before this line.
    cout << setprecision(10); // After that line, the output will have total 5 digit after and before decimal point.
    cout << "Addition : " << num1 + num2 << "\n";
    cout << "Subtraction : " << num1 - num2 << "\n";
    cout << "Multiplication : " << num1 * num2 << "\n";
    cout << "Division : " << num1 / num2 << "\n";
    cout << endl << endl;

    cout << "Result of fixed with setprecision(2) command : ";
    cout << endl;
    cout << fixed; // It will manipulate the use of setprecision function. The value into setprecision(value) will be the numbers digit after the decimal point.
    cout << setprecision(2); // The output will have total 2 digit after the decimal point.
    cout << "Addition : " << num1 + num2 << "\n";
    cout << "Subtraction : " << num1 - num2 << "\n";
    cout << "Multiplication : " << num1 * num2 << "\n";
    cout << "Division : " << num1 / num2 << "\n";
    cout << endl << endl;

    cout << "Result of setw(20) : "; // Good to know : setw is a function.
    //setw(20) means, the output will take total space of 20 characters.
    cout << endl;
    cout << setw(20) << "Addition : " << num1 + num2 << "\n";
    cout << setw(20) << "Subtraction : " << num1 - num2 << "\n";
    cout << setw(20) << "Multiplication : " << num1 * num2 << "\n";
    cout << setw(20) << "Division : " << num1 / num2 << "\n";
    cout << endl << endl;

    return 0;
}
