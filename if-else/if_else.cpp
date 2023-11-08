#include <iostream>
using namespace std;

// if - elseif - else statement

/**
 * In C++ programming, the if-else statement is used to execute a block of code if a certain condition is true, and another block of code if the condition is false.
 * The basic syntax of the if-else statement is as follows:
 *
 * if (condition)
 * {
 *     // code to be executed if the condition is true
 * }
 * else if (condition)
 * {
 *    // code to be executed if the condition is true
 * }
 * else
 * {
 *     // code to be executed if the condition is false
 * }
 *
 * The else block is optional, and can be omitted if no action is required when the condition is false.
 * Multiple else-if blocks can also be added to check for additional conditions.
 * It is important to note that the condition in the if statement must evaluate to a boolean value (true or false).
 */

/**
 * The main function prompts the user to enter their age and determines if they are eligible to vote.
 * If the age is greater than 150 or less than 1, the program outputs "Invalid age."
 * If the age is greater than or equal to 18, the program outputs "You can vote."
 * If the age is less than 18, the program outputs "You cannot vote."
 */

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age > 150 || age < 1) // age cannot be greater than 150 and less than 1
    {
        cout << "Invalid age.";
    }
    else if (age >= 18) // age must be greater than or equal to 18
    {
        cout << "You can vote.";
    }
    else // age must be less than 18
    {
        cout << "You cannot vote.";
    }

    return 0;
}
