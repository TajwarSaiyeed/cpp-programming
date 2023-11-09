#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Example 1: Declaring an array of integers
    int arr[5];

    // Example 2: Initializing an array of integers
    int arr2[5] = {1, 2, 3, 4, 5};

    // Example 3: Accessing array elements
    cout << "Example 3 => Accessing Array Elements arr2[0] : " << arr2[0] << endl; // Output: 1

    // Example 4: Changing array elements
    arr2[0] = 10;
    cout << "Example 4 => Changing array elements arr2[0] : " << arr2[0] << endl; // Output: 10

    // Example 5: Looping through an array
    for (int i = 0; i < 5; i++)
    {
        cout << "Example 5 => Looping through an array " << arr2[i] << endl;
    }

    // Example 6: Declaring an array of characters
    char arr3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // Example 7: Initializing an array of characters
    char arr4[] = "World";

    // Example 8: Concatenating two arrays of characters
    char arr5[11];
    strcpy(arr5, arr3);
    strcat(arr5, arr4);
    cout << "Example 8 => Concatenating two arrays of characters : " << arr5 << endl; // Output: HelloWorld

    // Example 9: Declaring a 2D array
    int arr6[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Example 10: Accessing 2D array elements
    cout << "Example 10 => Accessing 2D array elements : " << arr6[1][2] << endl; // Output: 6

    // Example 11: Printing 2D array elements
    for (int i = 0; i < 3; i++)
    {
        cout << "Example 11 => Printing 2D array elements : ";
        for (int j = 0; j < 3; j++)
        {
            cout << arr6[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
