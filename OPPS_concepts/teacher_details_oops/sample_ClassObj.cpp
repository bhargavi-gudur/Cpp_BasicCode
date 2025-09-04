/**
 *@file 
 * @author Gandla Bhargavi
 * @brief sample program to demonstrate class and object.
 * @version 0.1
 * @date 2025-02-22
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <string>

using namespace std;
/**
 *@brief class obj
 *
 */
class obj {
public:
    string name;
    int age;
    void intro();
};
/**
 *@brief member function to display name and age.
 *
 */
void obj::intro()
{
    cout << "name:" << name << endl;
    cout << "my age is :" << age << endl;
}
/**
 * @brief main function to create object of class obj and call member function.
 *
 * @return int
 */
int main() {
    obj obj1;
    obj1.name = "bhargavi";
    obj1.age = 30;
    obj1.intro();
    return 0;
}