/**
 * @file swap.cpp
 * @author Gandla Bhargavi
 * @brief to demostrate the programming class and object concept 
 *  swap program 
 * @version 0.1
 * @date 2024-11-05
 *
 */
#include <iostream>
#include <vector>

using namespace std;


/**
 * @brief  class swap  using vector method created and sapping the value swap1 
 * and swap2 array values.
 * 
 */
class swap_cls
{
private:
    vector<int> swap1;
    vector<int> swap2;

public:
    swap_cls();
    void swap_fun();
    void display();
    ~swap_cls() {}
};
/**
 * @brief Construct a new swap cls::swap cls object
 *
 */
swap_cls::swap_cls() : swap1({2, 3, 5}), swap2({4, 6, 7})
{
}
/**
 * @brief
 *
 */
void swap_cls ::swap_fun()
{
    swap(swap1, swap2);
}

/**
 * @brief to dispaly the function  swap1 and 
 * swap2 .
 *
 */
void swap_cls::display()
{
    cout << "swap1: ";
    for (int i : swap1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << " swap2: ";
    for (int i : swap2)
    {
        cout << i << " ";
    }
    cout << endl;
}
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    swap_cls obj_swap;
    cout << "before swap :" << endl;
    obj_swap.display();
    obj_swap.swap_fun();
    cout << "after swap :" << endl;
    obj_swap.display();
    return 0;
}
