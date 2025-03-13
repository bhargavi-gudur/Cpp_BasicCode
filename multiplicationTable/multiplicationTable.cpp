/**
 * @file multiplicationTable.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-12
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int mul_num;

extern "C" void multiplication_table(int *num); // extern "C" is used to call the c function in c++
/**
 * @brief  mul_table class is used to display the multiplication table of given number.
 *
 */
class mul_table
{
private:
    int num;

public:
    mul_table(int mulTB_num) : num(mulTB_num) {}
    void muliplicationTabledisplay()
    {
        int i, j;
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
            {
                cout << i << " * " << j << " = " << i * j << endl;
            }
            cout << endl;
        }
    }
    ~mul_table() { cout << "destructor is called :" << endl; }
};
/**
 * @brief  main function is used to call the multiplication_table function
 * and display the multiplication table of given number.
 *
 * @return int
 */
int main()
{
    cout << "---------------------------------" << endl;
    cout << " weclome to muliplication table " << endl;
    cout << "---------------------------------" << endl;
    cout << "enter the number to display the multiplication table:" << endl;
    cin >> mul_num;
    multiplication_table(&mul_num); // calling the c function in c++
    cout << "---------------------------------" << endl;
    cout << "muliplication table using class and object method :" << endl;
    mul_table objmulTb(mul_num);
    objmulTb.muliplicationTabledisplay();
    cout << "---------------------------------" << endl;
    return 0;
}
/**
 * @brief  multiplication_table function is used to display
 * the multiplication table of given number .
 *
 * @param num
 */
void multiplication_table(int *num)
{
    int i, j;
    for (i = 1; i <= (*num); i++)
    {
        for (j = 1; j <= (*num); j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}