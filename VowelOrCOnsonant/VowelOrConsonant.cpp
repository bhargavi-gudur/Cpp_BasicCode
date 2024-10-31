/**
 * @file VowelOrConsonant.cpp
 * @author GandlaBhargavi
 * @brief
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
 * @brief
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
 * @brief
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
