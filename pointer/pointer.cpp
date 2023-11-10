
#include <iostream>
using namespace std;

/**
 * The main function demonstrates the use of pointers in C++ programming.
 * It declares an integer variable, initializes it to 10, and then declares a pointer
 * variable that points to the address of the integer variable. It then prints the value
 * of the integer variable, its address, the value of the pointer variable, and the value
 * pointed to by the pointer variable. It then changes the value of the integer variable
 * through the pointer variable and prints the new value of the integer variable.
 *
 * @return 0 indicating success.
 */
int main()
{
    int num = 10;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 20;

    cout << "Value of num after changing value through pointer: " << num << endl;

        return 0;
}
