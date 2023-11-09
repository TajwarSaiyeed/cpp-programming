/**
 * This program demonstrates type casting in C++ programming.
 * Type casting is the process of converting one data type to another.
 * In this program, we cast an integer to a float and a float to an integer.
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << (float)a / 9 << endl; // Output: 1.11111

    float b = 10.5;
    cout << (int)b << endl; // Output: 10
    return 0;
}