/**
 * @file power_XN.bin_form.cpp
 * @author Gandla Bhargavi
 * @brief This program defines a class `binaryform` that converts an integer into its
 *  binary representation and displays it. The class constructor takes an integer as input,
 *  converts it to binary, and stores the binary digits in a vector.
 * 
 *  The `display_binary` method is used to print the binary form of the integer.
 * 
 * @version 0.1
 * @date 2026-05-07
 *
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief Class to represent a number in binary form */
class binaryform
{
private:
    vector<int> vec_num;
    int x;

public:
    // Constructor to initialize the binary form of the given integer
    binaryform(int x_value) : x(x_value)
    {
        // Convert x to binary and store in vec_num
        // corner case x^0 = 1, x^1 = x, x^-1 = 1/x
        if (x == 0)
        {
            vec_num.push_back(0);
            return;
        }
        if (x == 1)
        {
            vec_num.push_back(1);
            return;
        }

        if (x < 0)
        {
            x = -x;
            cout << "Negative number detected. Converting to positive." << endl;
        }
        while (x > 0)
        {
            vec_num.push_back(x % 2);
            x /= 2;
        }
    }
    /**
     * @brief  Method to display the binary form of the integer. It iterates through the vector
     * vec_num in reverse order to print the binary digits correctly, since the least significant
     *  bit is stored at the beginning of the vector.
     *
     */
    void display_binary()
    {
        cout << "Binary form: ";
        for (auto it : vec_num)
        {
            cout << it;
        }
        cout << endl;
    }
};

/**
 * @brief  The main function prompts the user to enter an integer, creates an instance of
 * the binaryform class with the input value, and then calls the display_binary method to
 *  show the binary representation of the integer.
 *
 * @return int
 */

int main()
{
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    binaryform obj_binary(value);
    obj_binary.display_binary();

    return 0;
}
