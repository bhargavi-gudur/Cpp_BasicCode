/**
 * @file vowel_Checker.cpp
 * @author gandla bhargavi
 * @brief This program checks whether a character is a vowel or consonant.
 * without using isalpha function.
 * @version 0.1
 * @date 2025-06-22
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
/**
 * @brief  This program checks whether a character is a vowel or consonant.
 *
 */
void vowel_or_consonant(char &ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        // Check if it's a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << ch << " is a vowel." << endl;
        }
        else
        {
            cout << ch << " is a consonant." << endl;
        }
    }
    else
    {
        cout << ch << " is not an alphabet." << endl;
    }
    cout << "Address of ch: " << (void *)&ch << endl;
}
/**
 * @brief  This program checks whether a character is a vowel or consonant.
 *
 * @return int
 */
int main()
{
    char user_ch;
    cout << "Enter a character: ";
    cin >> user_ch;
    vowel_or_consonant(user_ch);

    cout << "Address of user_ch: " << (void *)&user_ch << endl;

    return 0;
}
/**
 * @note: This is implemented without using the inbuilt isalpha function.
 * Change the file name to vowel_Checker.cpp.
 *
 * Using call by reference: user_ch and ch both
 * occupy the same memory location.
 */
