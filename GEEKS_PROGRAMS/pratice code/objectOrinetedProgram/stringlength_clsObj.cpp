/**
 * @file stringlength_clsObj.cpp
 * @author GANDLA BHARGAVI
 * @brief  This program calculates the length of a string using a class.
 * @version 0.1
 * @date 2025-06-17
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <string>

// Using standard namespace for convenience
using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @brief  This class is used to calculate the length of a string.
 * It contains methods to get user input and display the length of the string.
 */
class stringlength
{
private:
    string user_string;

public:
    void getInput()
    {
        cout << "Enter a string: ";
        getline(cin, user_string); // Proper input handling
    }
    void displayLength()
    {

        int length = 0;
        for (int i = 0; user_string[i] != '\0'; i++)
        {
            length++;
        }
        cout << "The length of the string is: " << length << endl;
    }
};

/**
 * @brief  Main function to execute the string length calculation.
 *
 * @return int
 */
int main()
{
    stringlength objstringlength;
    objstringlength.getInput();
    objstringlength.displayLength();

    return 0;
}
