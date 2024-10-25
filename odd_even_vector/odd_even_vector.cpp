/**
 * @file odd_even_vector.cpp
 * @author Gandla Bhargavi
 * @brief This project demonstrates how to classify numbers
 * as odd or even using vectors in C++.
 * @version 0.1
 * @date 2024-10-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief  class of odd_even
 *
 */
class odd_even
{
private:
    vector<int> oddoreven_var;

public:
    odd_even();
    void oddOreven();
    void display();
    ~odd_even();
};
/**
 * @brief constructor the odd even::odd even object
 *
 * @return odd_even
 */
odd_even ::odd_even()
{
}
/**
 * @brief display the vector of value
 *
 */
void odd_even::display()
{
    oddoreven_var.push_back(2);
    oddoreven_var.push_back(43);
    oddoreven_var.push_back(13);
    oddoreven_var.push_back(3);
    for (int v1 : oddoreven_var)
    {
        cout << "v1:" << v1 << endl;
    }
}
/**
 * @brief Check if numbers are odd or even
 *
 */
void odd_even::oddOreven()
{
    vector<int> odd;
    vector<int> even;
    for (int num : oddoreven_var)
    {
        if (num % 2 == 0)
        {
            even.push_back(num);
        }
        else
        {
            odd.push_back(num);
        }
    }
    cout << "even value :";
    for (int num : even)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "odd value: ";
    for (int num : odd)
    {
        cout << num << " ";
    }
    cout << endl;
}
/**
 * @brief Destroy the odd even::odd even object
 *
 */
odd_even::~odd_even()
{
}
int main()
{
    odd_even objodd_even;
    objodd_even.display();
    objodd_even.oddOreven();

    return 0;
}