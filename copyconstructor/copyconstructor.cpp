/**
 * @file copyconstructor.cpp
 * @author Gandla Bhargavi
 * @brief The `copyconstructor` class includes a parameterized constructor, a copy
 *  constructor, a destructor, and a method to display the value of its member variable.
 * @version 0.1
 * @date 2024-10-03
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

/**
 * @brief class for copyconstructor.
 *
 */
class copyconstructor
{
public:
    int value;
    // parameterized constructor
    copyconstructor(int varconstr);
    // copy  constructor
    copyconstructor(const copyconstructor &obj);
    void display()
    {
        cout << "value: " << value << endl;
    }
    // destructor
    ~copyconstructor() {}
};

/**
 * @brief
 *
 * @param varconstr
 * @return copyconstructor
 */
copyconstructor ::copyconstructor(int varconstr)
{
    value = varconstr;
}
/**
 * @brief Construct a new copyconstructor::copyconstructor object
 *
 * @param obj
 */
copyconstructor::copyconstructor(const copyconstructor &obj)
{
    value = obj.value;
}
/**
 * @brief The main function creates an object using the parameterized constructor
 * and another object using the copy constructor, then displays their values.
 *
 * @return int
 */
int main()
{
    copyconstructor obj1(10);
    copyconstructor obj2 = obj1;

    obj1.display();
    obj2.display();
    return 0;
}
