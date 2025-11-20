/**
 * @file Array2d_mixConcept.cpp
 * @author  Gandla bhargavi
 * @brief  This program demonstrates the use of  2D arrays, pointers,and ASCII character conversion in C++.
 *  It includes functions to convert ASCII values to English characters,
 *  loop through an array of ASCII values, and manipulate a 2D array using pointers.
 * The program prompts the user to input characters,converts them to their ASCII values,
 * and displays the corresponding English characters.
 * @version 0.1
 * @date 2025-06-07
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using namespace std;

/**function prototypes **/
void ascii_engWord();
void ascii_loopengWord();
void array_2d();

/**
 * @brief  Main function that serves as the entry point of the program.
 *
 * @return int
 */
int main()
{
    cout << "------------------------" << endl;
    cout << "Array 2D mix concept" << endl;
    ascii_engWord();
    cout << "------------------------" << endl;
    cout << "Array 2D mix concept with loop" << endl;
    ascii_loopengWord();
    cout << "------------------------" << endl;
    cout << "Array 2D mix concept with pointers" << endl;
    array_2d();
    cout << "------------------------" << endl;
    return 0;
}
/**
 * @brief  This function prompts the user to enter 5 ASCII values,
 * and converts them to their corresponding English characters.
 */
void ascii_engWord()
{
    int i1, i2, i3, i4, i5;
    cout << "enter 5 characters:" << endl;
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "ascii value to english character:" << endl;

    cout << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << endl;
    // system("pause>0");
}
/**
 * @brief  This function prompts the user to enter 5 ASCII values,
 * and then loops through the array of ASCII values,
 * converting each value to its corresponding English character.
 * * @details The function uses a for loop to read 5 ASCII values into an array,
 *
 */
void ascii_loopengWord()
{
    int i, arr[5], size = 5;
    cout << "enter 5 characters:" << endl;
    cout << "looping ->ascii value to english character:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "value: " << arr[i] << " -> char:" << char(arr[i]);
        cout << endl;
    }
}
/**
 * @brief  This function demonstrates the use of a 2D array,
 * pointers, and various pointer arithmetic operations.
 * It initializes a 3x3 array, assigns a pointer to its first element,
 * and then prints the elements of the array using different pointer dereferencing techniques.
 */
void array_2d()
{
    int a[3][3] = {6, 2, 5, 0, 1, 4, 9, 8};
    int *p;
    p = &a[0][0];
    int i, j, size = 3;
    cout << "------------------------" << endl;
    cout << "p =& a[0][0] ->" << p << endl;
    cout << "a[0][0] ->" << a[0][0] << endl;
    cout << "a[0] ->" << a[0] << endl;

    cout << "size:" << sizeof(a[0][0]) << endl;
    cout << "------------------------" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "a[i][j]->" << a[i][j] << endl;
            cout << "*(*(a+i)+j)->" << *(*(a + i) + j) << endl;
            cout << "************************" << endl;
        }
    }
    cout << "------------------------" << endl;
    cout << "**a ->" << **a << endl;
    cout << "*(*a+1) ->" << *(*a + 1) << endl;
    cout << "(*a)+1 ->" << (*a) + 1 << endl;

    cout << "(a+2) ->" << (a + 2) << endl;
    cout << "------------------------" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            cout << "(a+i)+j ->" << *(a + i) + j << " , v:" << (**(a + i) + j) << endl;
            cout << "************************" << endl;
        }
    }
    cout << "------------------------" << endl;
}