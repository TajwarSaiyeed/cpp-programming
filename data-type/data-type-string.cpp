#include <iostream>
using namespace std;

/**
 * String Methods
 * string access, find, substr, erase, replace, insert, compare, etc.
 */

/**
 * This program demonstrates various operations that can be performed on string data type in C++.
 * This program demonstrates the use of string data type in C++.
 */
int main()
{
    // string data type
    string name = "tajwar saiyed";
    cout << "String: " << name << endl;

    // Input string from user

    string name2;
    cout << "Enter your name: ";
    cin >> name2;
    cout << "Your name is: " << name2 << endl;

    // Input string with spaces

    string name3;
    cout << "Enter your full name: ";
    getline(cin, name3);
    cout << "Your full name is: " << name3 << endl;

    // string concatenation

    string firstName = "Tajwar";
    string lastName = "Saiyed";
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;

    /**
     * String Concatenation
     * string1 + string2
     * String Concatenation means to append one string to the end of another string.
     */

    // string length

    string name4 = "Tajwar Saiyeed";
    cout << "Length of name4: " << name4.length() << endl;

    /**
     * String Length
     * string.length()
     * The length() function is used to find the length of a string.
     * The length of a string is the number of characters in the string.
     */

    // string access

    string name5 = "Tajwar Saiyeed";
    cout << "First character: " << name5[0] << endl;

    /**
     * String Access
     * string[index]
     * The index of the first character is 0, the second character is 1, and so on.
     * The index must be an integer. Otherwise, the compiler will give an error.
     */

    // string find

    string name6 = "Tajwar Saiyeed";
    cout << "Index of 'Saiyeed': " << name6.find("Saiyeed", 0) << endl;

    /**
     * String Find
     * string.find(string, index)
     * The find() function is used to find the index of a substring in a string.
     * The find() function returns the index of the first occurrence of the substring.
     * If the substring is not found, the find() function returns string::npos.
     * string::npos is a constant value with the highest possible value for an element of type size_t.
     * It means that the substring is not found.
     */

    // string substr

    string name7 = "Tajwar Saiyeed";
    cout << "Substring: " << name7.substr(7, 7) << endl;

    /**
     * String Substr
     * string.substr(start, length)
     * The substr() function is used to extract a substring from a string.
     * The substr() function returns the substring.
     * The first parameter is the starting index of the substring.
     * The second parameter is the length of the substring.
     * If the second parameter is not specified, the substr() function returns the substring from the starting index to the end of the string.
     * If the starting index is greater than or equal to the length of the string, the substr() function returns an empty string.
     * If the length of the substring is greater than the length of the string, the substr() function returns the substring from the starting index to the end of the string.
     * If the starting index is negative, the substr() function starts extracting from the end of the string.
     * If the starting index is negative and its absolute value is greater than the length of the string, the substr() function returns an empty string.
     */

    // string erase

    string name8 = "Tajwar Saiyeed Abid";
    cout << "Erase: " << name8.erase(7, 7) << endl;

    /**
     * String Erase
     * string.erase(start, length)
     * The erase() function is used to erase a substring from a string.
     * The erase() function returns the string after erasing the substring.
     * The first parameter is the starting index of the substring.
     * The second parameter is the length of the substring.
     * If the second parameter is not specified, the erase() function erases the substring from the starting index to the end of the string.
     * If the starting index is greater than or equal to the length of the string, the erase() function does nothing.
     * If the length of the substring is greater than the length of the string, the erase() function erases the substring from the starting index to the end of the string.
     * If the starting index is negative, the erase() function starts erasing from the end of the string.
     */

    // string replace

    string name9 = "Tajwar Saiyeed Abid";
    cout << "Replace: " << name9.replace(7, 7, "Saiyed") << endl;

    /**
     * String Replace
     * string.replace(start, length, new_string)
     * The replace() function is used to replace a substring in a string with a new string.
     * The replace() function returns the string after replacing the substring.
     * The first parameter is the starting index of the substring.
     * The second parameter is the length of the substring.
     * The third parameter is the new string that will replace the substring.
     * If the second parameter is not specified, the replace() function replaces the substring from the starting index to the end of the string.
     * If the starting index is greater than or equal to the length of the string, the replace() function does nothing.
     * If the length of the substring is greater than the length of the string, the replace() function replaces the substring from the starting index to the end of the string.
     * If the starting index is negative, the replace() function starts replacing from the end of the string.
     */

    // string insert

    string name10 = "Tajwar Saiyeed";
    cout << "Insert: " << name10.insert(14, " Abid") << endl;

    /**
     * String Insert
     * string.insert(index, string)
     * The insert() function is used to insert a string into another string.
     * The insert() function returns the string after inserting the substring.
     * The first parameter is the index where the string will be inserted.
     * The second parameter is the string that will be inserted.
     * If the index is greater than or equal to the length of the string, the insert() function appends the string to the end of the string.
     * If the index is negative, the insert() function starts inserting from the end of the string.
     */

    // string compare

    string name11 = "Tajwar";
    string name12 = "Saiyeed";

    if (name11.compare(name12) == 0)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    /**
     * String Compare
     * string.compare(string)
     * The compare() function is used to compare two strings.
     * The compare() function returns 0 if the strings are equal.
     * The compare() function returns a positive value if the first string is greater than the second string.
     * The compare() function returns a negative value if the first string is less than the second string.
     * The compare() function is case sensitive.
     * The compare() function compares the strings lexicographically.
     * Lexicographical order is the way of ordering words based on the alphabetical order of their component letters.
     * For example, the lexicographical order of the words "apple", "banana", "cherry" is "apple", "banana", "cherry".
     * The lexicographical order of the words "cherry", "banana", "apple" is "apple", "banana", "cherry".
     */

    return 0;
}