#include <iostream>
using namespace std;

/**
 * In C++ programming, a loop is a control structure that repeats a sequence of instructions until a specific condition is met.
 *
 * The basic syntax of a loop in C++ is as follows:
 *
 * while (condition)
 * {
 *    // code to be executed
 * }
 *
 * The while loop evaluates the condition before executing the code inside the loop.
 *
 * The do-while loop evaluates the condition after executing the code inside the loop.
 *
 * do
 * {
 *   // code to be executed
 * } while (condition);
 *
 * The for loop is used to execute a block of code a certain number of times.
 *
 * for (initialization; condition; increment)
 * {
 *   // code to be executed
 * }
 *
 * The initialization statement is executed only once when the loop begins.
 *
 * The condition is evaluated at the beginning of each iteration.
 *
 * The increment statement is executed at the end of each iteration.
 *
 * The initialization, condition, and increment statements are optional, and can be omitted if no action is required.
 *
 * The break statement is used to exit a loop.
 *
 */

int main()
{
    int i = 0;

    cout << "While loop" << endl;

    // while loop
    while (i < 5)
    {
        cout << "while loop iteration: " << i << std::endl;
        i++;
    }

    cout << "For loop" << endl;

    // for loop
    for (int j = 0; j < 5; j++)
    {
        cout << "for loop iteration: " << j << endl;
    }

    cout << "Do-while loop" << endl;

    // do-while loop
    int k = 0;
    do
    {
        cout << "do-while loop iteration: " << k << endl;
        k++;
    } while (k < 5);

    return 0;
}
