/**
 * @file ASCII_int_char.cpp
 * @author gandla bhargavi
 * @brief  This program demonstrates the conversion between
 *  ASCII characters and their integer values.
 * @version 0.1
 * @date 2025-06-24
 *
 */
#include <iostream>
#include <limits>

// using std :: , no need to define std  repeatedly
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;  
using std::streamsize;
using std::string;

/**
 * @brief Class to handle ASCII character and integer conversions.
 *
 * This class provides methods to convert a character to its ASCII value
 * and to print ASCII characters for a given range.
 */
class ASCII_Conversion
{
private:
    char ch;
    int num;

public:
    // Constructor
    /**
     * @brief Default constructor for ASCII_Conversion class.
     *
     * Initializes the character to a default value and the integer to 0.
     * Outputs a message indicating that the object has been initialized.
     */
    ASCII_Conversion()
    {
        ch = '\0'; // or any default character
        num = 0;
        cout << "Constructor called: Object initialized!" << endl;
    }

    /**
     * @brief Converts a character to its ASCII integer value.
     *
     * This method prompts the user for a character and displays its
     * corresponding ASCII integer value.
     */
    void ascii_char_int()
    {
        cout << "Enter a character to find its ASCII value: ";
        cin >> ch;
        cout << ch << " ASCII value: " << int(ch) << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    /**
     * @brief Prints ASCII characters from 64 to a user-defined upper limit.
     *
     * This method prompts the user for an upper limit and prints all ASCII
     * characters from 64 up to that limit, ensuring the limit is within the
     * valid range of 64 to 225.
     */
    void ascii_loop_int_char()
    {
        cout << "Enter the upper limit (between 64 and 225) to print ASCII characters: ";
        cin >> num;

        if (num < 64 || num > 225)
        {
            cout << "Please enter a value between 64 and 225." << endl;
            return;
        }

        for (int i = 64; i < num; i++)
        {
            cout << i << " ASCII character: " << char(i) << endl;
        }
    }
};

/**
 * @brief Main function to demonstrate ASCII conversions.
 *
 * This function creates an instance of the ASCII_Conversion class
 * and calls its methods to perform conversions.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    ASCII_Conversion obj_ASCII_Conversion;
    obj_ASCII_Conversion.ascii_char_int();
    obj_ASCII_Conversion.ascii_loop_int_char();
    return 0;
}
