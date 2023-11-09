
#include <iostream>
using namespace std;

// function declaration
int add(int a, int b);

int main()
{
    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // function call
    sum = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}

// function definition
int add(int a, int b)
{
    return a + b;
}
