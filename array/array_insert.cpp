/**
 * @file array_insert.cpp
 * @author gandla bhargavi
 * @brief  This is a simple C++ program designed to help beginners understand,
 * how to insert elements into an array at a specific position.
 *
 * It covers basic C++ concepts like loops, arrays, and standard
 * input/output operations.
 *
 * @version 0.1
 * @date 2025-02-24
 *
 */

#include <iostream>
#include <array>

using namespace std;

/*function declaration*/
void insertAtSpec_Pos();
void insertAtFirst_Pos();
void insert_Sorted_SpecPos();

/**
 * @brief   main function is the entry point of the program
 *
 * @return int
 */
int main()
{
    /*function calling*/
    cout << "-----------------Array Insertion-----------------" << endl;
    cout << "insert at specific position:" << endl;
    insertAtSpec_Pos();
    cout << "----------------------------------" << endl;
    cout << "insert at element at first position:" << endl;
    insertAtFirst_Pos();
    cout << "----------------------------------" << endl;
    cout << "insert element at sorted array specific position:" << endl;
    insert_Sorted_SpecPos();
    cout << "----------------------------------" << endl;
    return 0;
}

/*function defintion*/

/**
 * @brief insertAtSpec_Pos() function is used to insert
 *  an element at a specific position in an array.
 *
 */
void insertAtSpec_Pos()
{
    int size = 10;
    const int MAX_SIZE = 11;
    int arr[MAX_SIZE] = {10, 20, 34, 56, 67, 56, 23, 45, 60};

    int pos = 0;
    int num = 0, i = 0;

    cout << "enter the number : \n";
    cin >> num;
    cout << "enter the pos :\n";
    cin >> pos;
    if (pos < 1 || pos > size + 1)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
        cout << "at size to pos  array dsplay:[" << i << "]\t" << arr[i] << endl;
    }
    arr[pos - 1] = num;
    size++;

    cout << "the array display:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "array -> [" << i << "]\t" << arr[i] << endl;
    }
}
/**
 * @brief insertAtFirst_Pos() function is used to insert
 * an element at the first position in an array.
 *
 */
void insertAtFirst_Pos()
{
    int size = 10;
    const int MAX_SIZE = 11;
    int arr[MAX_SIZE] = {10, 20, 34, 56, 67, 56, 23, 45, 60};
    int num = 0, i = 0;

    cout << "enter the number : \n";
    cin >> num;
    
    for (i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
        cout << "at size to pos  array dsplay:[" << i << "]\t" << arr[i] << endl;
    }
    arr[0] = num;
    size++;

    cout << "the array display:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "array -> [" << i << "]\t" << arr[i] << endl;
    }
}
/**
 * @brief insert_Sorted_SpecPos() function is used to insert
 * an element at a specific position in a sorted array.
 */
void insert_Sorted_SpecPos()
{
    int size = 10;
    const int MAX_SIZE = 11;
    int arr[MAX_SIZE] = {10, 20, 34, 56, 67, 56, 23, 45, 60};
    int num = 0, pos=0,i = 0;

    cout << "enter the number : \n";
    cin >> num;
    cout << "enter the pos :\n";
    cin >> pos;
    cout << "the array display:" << endl;

    arr[size] =arr[pos-1]; // last element of array
    arr[pos-1] = num;//inserting element at specific position

    for (i = 0; i < size; i++)
    {
        cout << "array -> [" << i << "]\t" << arr[i] << endl;
    }
}