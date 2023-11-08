
#include <iostream>
using namespace std;

// This is a global variable named "myGlobalVariable"
int myGlobalVariable;

int main()
{
    // This is a local variable named "myLocalVariable"
    int myLocalVariable = 5;

    // reassigning the value of myLocalVariable
    myLocalVariable = 10;

    cout << myLocalVariable << endl;

    // This is a constant variable named "MY_CONSTANT" with a value of 10
    // const variables cannot be reassigned
    const int MY_CONSTANT = 10;

    // This is a pointer variable named "myPointer" that points to an integer
    int *myPointer;

    // This is a boolean variable named "isTrue" with a value of true
    bool isTrue = true;

    // This is a character variable named "myChar" with a value of 'a'
    char myChar = 'a';

    // This is a floating point variable named "myFloat" with a value of 3.14
    float myFloat = 3.14;

    // This is a double precision variable named "myDouble" with a value of 2.71828
    double myDouble = 2.71828;

    // This is an array of integers named "myArray" with a size of 5
    int myArray[5];

    // This is a string variable named "myString" with a value of "Hello, world!"
    std::string myString = "Hello, world!";

    // This is a variable named "myAutoVariable" that is automatically assigned a type based on its value
    auto myAutoVariable = 42;

    // This is a variable named "myLongVariable" with a value of 1000000
    long myLongVariable = 1000000;

    // This is a variable named "myLongLongVariable" with a value of 1000000000000
    long long myLongLongVariable = 1000000000000;

    cout << "Hello world Abid" << endl;
    cout << "Next line";
    return 0;
}
