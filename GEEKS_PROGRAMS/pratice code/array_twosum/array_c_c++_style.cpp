/**
 * @file array_c_c++_style.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of 2D arrays in C and C++.
 * It includes a class that handles a 2D array and a function that uses a C-style 2D array.
 * @version 0.2
 * @date 2025-02-27
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief  This class demonstrates the use of a 2D array in C++.
 * 
 */
class array_2d
{
public:
    // array_2d(){}

    void array_2d_fun();
    ~array_2d() {}
};
/**
 * @brief  This function demonstrates the use of a 2D array in a class.
 * 
 */
void array_2d ::array_2d_fun()
{
    int size_n = 2, size_m = 3;
    int arr[2][3];
    int i, j;
    cout << "enter 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "display 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << " ";
        }
        cout << endl;
    }
}
/**
 * @brief  This function demonstrates the use of a C-style 2D array.    
 * 
 */
extern "C" void general_cstyle_array_2d()
{
    int size_n = 2, size_m = 3;
    int arr[2][3];
    int i, j;
    cout << "enter 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "display 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * @brief  This is the main function that creates an instance of the array_2d class,
 * 
 * @return int 
 */
int main()
{

    array_2d objarray;
    objarray.array_2d_fun();
    general_cstyle_array_2d();
    return 0;
}
