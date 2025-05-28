/**
 * @file stack_sample.cpp
 * @author Gandla bhargavi
 * @brief   This file contains the implementation of stack operations using STL
 * @version 0.1
 * @date 2025-05-28
 *
 */
#include <iostream>
#include <stack>

using namespace std;
/**
 * @brief  Display the elements of the stack
 *
 * @param stackofelement
 */
void DisplaystackNum(stack<int> stackofelement)
{
    while (!stackofelement.empty())
    {
        cout << stackofelement.top() << endl;
        stackofelement.pop();
    }
}
/**
 * @brief  Function to demonstrate the stack operations
 *
 */
void stack_function()
{
    stack<int> numofstack;
    // push function
    numofstack.push(10);
    numofstack.push(20);
    numofstack.push(45);
    numofstack.push(30);
    numofstack.push(50);
    numofstack.push(90);
    // pop function
    numofstack.pop();

    // top function calling
    cout << "Top element of the stack is " << numofstack.top() << endl;
    DisplaystackNum(numofstack);

    // empty stack
    if (numofstack.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    
    // size of the stack
    cout << " stack size is " << numofstack.size() << endl;
    // clear the stack
    numofstack = stack<int>();
    cout << "Stack cleared" << endl;
    // check the size of the stack after clearing   
    cout << " stack size is " << numofstack.size() << endl;
    // check the top element of the stack after clearing
}

/**
 * @brief  Main function to call the stack function
 *
 * @return int
 */
int main()
{
    stack_function();
    return 0;
}