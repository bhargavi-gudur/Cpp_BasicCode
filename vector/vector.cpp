/**
 * @file vector.cpp
 * @author Gandla Bhargavi.
 * @brief This file demonstrates the use of vectors
 * in C++ to store, manipulate, and display a series of integers and floats.
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
using namespace std;

void vector_fun();          // function declaration
void vector_pushBack_fun(); // function declaration

/**
 * @brief he entry point of the program.
 * It calls the two declared functions and returns 0,
 * indicating successful execution.
 *
 * @return int
 */
int main()
{
    vector_fun();
    vector_pushBack_fun();
    return 0;
}
/**
 * @brief Demonstrates initializing vectors,
 *  assigning values, and modifying specific elements.
 *
 */
void vector_fun()
{
    vector<int> v1;
    vector<float> v2;

    v1.assign(9, 1);
    v2.assign(5, 8.9);

    cout << "the vector integer display" << endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << " v1 :" << v1[i] << endl;
    }
    cout << "the vector float display" << endl;
    for (size_t i = 0; i < v2.size(); i++)
    {
        v2[4] = 6.7;
        cout << " v2 :" << v2[i] << endl;
    }
}
/**
 * @brief Shows how to use the push_back method to dynamically
 * add user input to a vector and then display those values.
 */
void vector_pushBack_fun()
{
    vector<int> v3;
    int value;
    cout << "enter the value in vector v3 :" << endl;
    while (true) // Continuously prompt for input until -1 is entered
    {
        cin >> value;
        if (value == -1)
            break;           // Stop taking input if -1 is entered
        v3.push_back(value); // Add value to the vector
    }
    for (size_t i = 0; i < v3.size(); i++)
    {
        cout << "v3:" << v3[i] << endl;
    }
}
