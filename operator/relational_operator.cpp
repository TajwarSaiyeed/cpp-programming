#include <iostream>
using namespace std;

// Relational operator

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    bool isEqual = a == b;          // equal to operator
    bool isNotEqual = a != b;       // not equal to operator
    bool isGreater = a > b;         // greater than operator
    bool isLess = a < b;            // less than operator
    bool isGreaterOrEqual = a >= b; // greater than or equal to operator
    bool isLessOrEqual = a <= b;    // less than or equal to operator

    cout << boolalpha; // to print bool values as true or false instead of 1 or 0
    cout << "isEqual = " << isEqual << endl;
    cout << "isNotEqual = " << isNotEqual << endl;
    cout << "isGreater = " << isGreater << endl;
    cout << "isLess = " << isLess << endl;
    cout << "isGreaterOrEqual = " << isGreaterOrEqual << endl;
    cout << "isLessOrEqual = " << isLessOrEqual << endl;

    return 0;
}