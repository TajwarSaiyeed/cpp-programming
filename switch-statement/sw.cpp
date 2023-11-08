/**
 * This program demonstrates the use of switch statement in C++ programming language.
 *  The program takes an integer input from the user and outputs a grade letter based on the input.
 * The program uses a switch statement to determine the grade letter based on the input.
 * If the input is less than 0 or greater than 100, the program outputs an error message.
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade / 10)
    {
    case 10:
    case 9:
        cout << "Your grade is A+" << endl;
        break;
    case 8:
        cout << "Your grade is A+" << endl;
        break;
    case 7:
        cout << "Your grade is A" << endl;
        break;
    case 6:
        cout << "Your grade is A-" << endl;
        break;
    default:
        if (grade < 0 || grade > 100)
        {
            cout << "Error: Invalid grade" << endl;
        }
        else
        {
            cout << "Your grade is F" << endl;
        }
        break;
    }

    return 0;
}