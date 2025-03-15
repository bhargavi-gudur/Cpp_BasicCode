/**
 * @file switchcase_callbyref.cpp
 * @author gandlaBhargavi
 * @brief  this is a sample program to demostrate switch 
 * case using call by reference approach.
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
 * @brief  main function
 * 
 * @return int 
 */
int main()
{
    int choiceType;
    cout << "enter the choice :" << endl;
    cin >> choiceType;
    switchcaseFunction(&choiceType);
    return 0;
}
/**
 * @brief 
 * 
 * @param choice 
 */
void switchcaseFunction(int *choice)
{
    switch (*choice)
    {
    case 1:
        cout << "you pressed choice  : " << *choice << endl;
        cout << " i want to know my balance" << endl;
        break;
    case 2:
        cout << "you pressed choice  : " << *choice << endl;
        cout << "i want to register a compilant" << endl;
        break;
    case 3:
        cout << "you pressed choice  : " << *choice << endl;
        cout << "i want to talk to customer care exective" << endl;
        break;
    case 4:
        cout << "you pressed choice  : " << *choice << endl;
        cout << "feed back to the resolved by the exective" << endl;
        break;
    default:
        cout << "invalid choice" << endl;
        break;
    }
}
