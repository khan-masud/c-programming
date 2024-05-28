#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int randomNumber, inputNumber;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    cout << "----------------------------------------------------------------------------";
    cout << endl <<"----------------------------------------------------------------------------" << endl << endl;
    cout << "                    Welcome To Guessing Game" << endl << endl;
    cout << "----------------------------------------------------------------------------";
    cout << endl <<"----------------------------------------------------------------------------" << endl << endl;
    cout << "  Tips : " << endl << "---------" << endl;
    cout << "1. The computer will take a random number 1 to 100. \n2. You can guess the number and input it. \n3. Lets play the game and test your guessing power..." << endl << endl;
    cout << "Computer has taken a random number. Now your turn..." << endl << endl;

    for (int i = 1; ; i++)
    {
        cout << "Enter your number : ";
        cin >> inputNumber;

        if (randomNumber == inputNumber)
        {
            cout << endl << endl <<"----------------------------------------------------------------------------" << endl << endl;
            cout << "Congratulation buddy! " << endl << "You won the game;" << endl << "The number was : "<< randomNumber ;
            cout << endl << "You have taken " << i << " try." << endl;
            cout << endl << endl <<"----------------------------------------------------------------------------" << endl << endl;
            break;
        }
        else if (randomNumber > inputNumber)
        {
            cout << "Opps! You are smaller than the number. Try again." << endl << endl;
        }
        else if (randomNumber < inputNumber)
        {
            cout << "Opps! You are greater than the number. Try again." << endl << endl;
        }
        else
        {
            cout << "Invalid input.";
            break;
        }
    }

    return 0;
}
