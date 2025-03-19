/**
 * @file template_datatypes.cpp
 * @author GandlaBhargavi
 * @brief to demostrates using template concept built the program  for datatypes.
 * @version 0.1
 * @date 2025-03-16
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std ::endl;

template <class datatypes>
/**
 * @brief
 *
 * @param value
 */
void printdatatypes(datatypes value)
{
    cout << value << " size:" << sizeof(value) << endl;
}

/**
 * @brief
 *
 * @return int
 */
int main()
{
    int a = 2;
    float b = 2.056f;
    double c = 2.0003;
    char d = 'D';
    int choiceDatatype;

    cout << "enter the data type choice 1 to 4 " << endl;
    cin >> choiceDatatype;

    switch (choiceDatatype)
    {
    case 1:
        cout << " the integer datatypes  : ";
        printdatatypes(a);
        break;

    case 2:
        cout << " the  float datatypes  : ";
        printdatatypes(b);
        break;
    case 3:
        cout << " the double datatypes  : ";
        printdatatypes(c);
        break;
    case 4:
        cout << " the char datatypes  : ";
        printdatatypes(d);
        break;
    default:
        cout << "Please enter a valid choice between 1 and 4 to display a data type." << endl;
    }
    return 0;
}
