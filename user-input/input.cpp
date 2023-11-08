#include <iostream>
using namespace std;

int main()
{
    int a, b, result;

    // Prompt user to enter first number
    cout << "Enter first number: ";

    // Read the input from user and store it in variable a
    cin >> a;

    // Prompt user to enter second number
    cout << "Enter second number: ";

    // Read the input from user and store it in variable b
    cin >> b;

    // Add the two numbers and store the result in variable result
    result = a + b;

    // Display the result to the user
    cout << "Sum = " << result;

    return 0;
}
