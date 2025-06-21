/**
 * @file STL_Circular_LL.cpp
 * @author Gandla Bhargavi
 * @brief  This file demonstrates the use of STL's list to simulate 
 * circular linked list behavior.
 * @version 0.1
 * @date 2025-06-21
 * 
 */
#include <iostream>
#include <list>

/**
 * @brief  This function demonstrates the use of STL's list to simulate
 * circular linked list behavior by traversing the list multiple times.
 * 
 */
void  Circular_ll_STL()
{
    std::list<int> circularList;

    // Insert values from the user
    std::cout << "Enter 4 elements for the list:\n";
    for (int i = 0; i < 4; ++i)
    {
        int value;
        std::cin >> value;
        circularList.push_back(value);
    }

    std::cout << "\nCircular traversal (simulated):\n";
    int cycles = 2; // Number of rounds through the list
    for (int round = 0; round < cycles; ++round)
    {
        for (const int &elem : circularList)
        {
            std::cout << elem << " ";
        }
    }

    std::cout << std::endl;
}
/**
 * @brief  Main function to execute the circular linked list simulation using STL.
 * 
 * @return int 
 */
int main()
{
    Circular_ll_STL();
    return 0;
}
