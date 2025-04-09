/**
 * @file queue_sample.cpp
 * @author Gandla bhargavi
 * @brief  This file contains the implementation of queue operations using STL        
 * @version 0.1
 * @date 2025-04-09
 * 
 */

#include <iostream>
#include<queue>

using namespace std;
/**
 * @brief  Display the elements of the queue
 * 
 * @param queueofelement 
 */
void DisplayqueueNum(queue<int> queueofelement)
{
    while (!queueofelement.empty())
    {
        cout << queueofelement.front() << endl;
        queueofelement.pop();
    }
}
/**
 * @brief  Function to demonstrate the queue operations
 * 
 */void queue_function()
 {
  queue<int> numofqueue;
    // push function
    numofqueue.push(40);            
    numofqueue.push(20);
    numofqueue.push(145);
    numofqueue.push(30);
    numofqueue.push(50);
    numofqueue.push(90);
    // pop function
    numofqueue.pop();
    // front function calling
    cout << "Front element of the queue is " << numofqueue.front() << endl;
    DisplayqueueNum(numofqueue);
    // back function calling
    cout << "Back element of the queue is " << numofqueue.back() << endl;
    // empty queue
    if (numofqueue.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    // size of the queue
    cout << " queue size is " << numofqueue.size() << endl;
    // clear the queue
    numofqueue = queue<int>();
    cout << "Queue cleared" << endl;
     
 }
 int main()
 {
        queue_function();
        return 0;
 }