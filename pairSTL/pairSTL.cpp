/**
 * @file pairSTL.cpp
 * @author Gandla Bhargavi
 * @brief this program  of the `pair` container
 * in the Standard Template Library (STL) of C++.
 * @version 0.1
 * @date 2024-10-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <utility>
using namespace std;
void pair_fun(); // function declaration
/**
 * @brief
 *
 * @return int
 */
int main()
{
    pair_fun(); // function calling
    return 0;
}
/**
 * @brief this function Contains the main logic
 * for creating and manipulating pairs.
 *
 */
void pair_fun()
{
    cout << "==========================================" << endl;
    pair<int, float> pair_var(23, 5.67);
    cout << "pair of first : " << pair_var.first << endl;
    cout << "pair of second : " << pair_var.second << endl;
    cout << "==========================================" << endl;
    pair<int, string> pair_var2(234, "bhargavi");
    cout << "pair of first : " << pair_var2.first << endl;
    cout << "pair of second :" << pair_var2.second << endl;

    cout << "==========================================" << endl;
    cout << "pair to create another pair " << endl;
    pair<int, float> pair_var3(pair_var);
    cout << "pair of first : " << pair_var3.first << endl;
    cout << "pair of second : " << pair_var3.second << endl;
    cout << "==========================================" << endl;

    auto p4 = make_pair(string("time"), 34);
    cout << "pair of first : " << p4.first << endl;
    cout << "pair of second : " << p4.second << endl;
    cout << "==========================================" << endl;
}