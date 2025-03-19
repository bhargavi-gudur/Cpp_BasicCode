/**
 * @file switchcase_ifelse.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-15
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

extern "C"
{
    void switchcaseFunction(int *choice);
};
/**
 * @brief
 *
 * @return int
 */
int main()
{
    int choiceSwitchCase;
    cout << "Enter your choice (1 or 2): :" << endl;
    cin >> choiceSwitchCase;
    switchcaseFunction(&choiceSwitchCase);
    return 0;
}
/**
 * @brief
 *
 * @param choice
 */
void switchcaseFunction(int *choice)
{
    if (*choice == 1)
    {
        int choiceType;
        cout << "Enter an option (1-4): :" << endl;
        cin >> choiceType;

        switch (choiceType)
        {
        case 1:
            cout << "you pressed choice  : " << choiceType << endl;
            cout << " i want to know my balance" << endl;
            break;
        case 2:
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "i want to register a compilant" << endl;
            break;
        case 3:
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "i want to talk to customer care exective" << endl;
            break;
        case 4:
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "feed back to the resolved by the exective" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
    else if (*choice == 2)
    {
        char choiceType;
        cout << "Enter an option (a-d) and j :" << endl;
        cin >> choiceType;

        switch (choiceType)
        {
        case 'a':
            cout << "you pressed choice  : " << choiceType << endl;
            cout << " character a " << endl;
            break;
        case 'b':
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "character b" << endl;
            break;
        case 'c':
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "character C" << endl;
            break;
        case 'd':
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "character d" << endl;
            break;
        case 'j':
            cout << "you pressed choice  : " << choiceType << endl;
            cout << "character j" << endl;
            break;
        default:
            cout << "invalid choice " << endl;
            break;
        }
    }
    else
    {
        cout << " Invalid choice for the main menu! Please choose 1 or 2. " << endl;
    }
}
