#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;               // addition operator
    int diff = a - b;              // subtraction operator
    int product = a * b;           // multiplication operator
    float quotient = (float)a / b; // division operator (cast to float to get decimal value)
    int remainder = a % b;         // modulus operator

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
}