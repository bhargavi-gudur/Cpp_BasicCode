/**
 * @file VowelOrConsonant.cpp
 * @author GandlaBhargavi
 * @brief The program uses the `isalpha`
 * function from the C++ standard library to check if the input is an alphabet.
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cctype>

using namespace std;
/**
 * @brief class of vowel or consonant.
 *
 */
class VowelOrConsonant
{
private:
public:
    VowelOrConsonant() {}
    void display();
    ~VowelOrConsonant() {}
};
/**
 * @brief  - Check if a character is a vowel.
 *         - Check if a character is a consonant.
 *         - Identify if the character is not an alphabet.
 *
 */
void VowelOrConsonant::display()
{
    char ch;
    cout << " enter the alphabet :" << endl;
    cin >> ch;
    if (isalpha(ch))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
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
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    VowelOrConsonant VowelOrConsonant;
    VowelOrConsonant.display();

    return 0;
}
