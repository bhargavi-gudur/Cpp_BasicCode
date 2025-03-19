/**
 * @file pointerToStuct.cpp
 * @author Gandla Bhargavi
 * @brief  To demostrate sample code using pointer to structure, 
 * to access the structure value by two concept (one is pointer , other dynmaic memory allocation).
 * @version 0.1
 * @date 2025-03-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* structure declartion */
struct rectangle
{
    int lenght;
    int breadth;
};

extern "C"
{
    void pointertostruct();
    void dynamicMemory();
};

/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    cout << "-----------------------------------------------------------" << endl
         << endl;
    cout << " ************* 1. pointer to structure concept ************** " << endl;
    pointertostruct();
    cout << endl;
    cout << " *********** 2. dynamic alloc pointer to structure concept ********* " << endl;
    dynamicMemory();
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    return 0;
}

/**
 * @brief this function the use of pointers to access and modify structure members.
 * 
 */
void pointertostruct()
{
    struct rectangle r = {10, 5}; // structure initilization
    struct rectangle *ptr = &r;
    r.lenght = 15;
    cout << "1-> r.lenght:" << r.lenght << endl;
    ptr->lenght = 20;
    cout << "1-> (ptr->lenght):" << ptr->lenght << endl;
    (*ptr).lenght = 89;
    cout << "r.lenght:" << r.lenght << endl;
    cout << "ptr->lenght:" << ptr->lenght << endl;
    cout << "(*ptr).lenght:" << (*ptr).lenght << endl;
    cout << "rectangle size :" << r.lenght * r.breadth << endl;
}

/**
 * @brief this function using  dynamic memory allocation to access
 *  structure paramater .
 * 
 */

void dynamicMemory()
{
    struct rectangle *Dymptr;
    Dymptr = new rectangle();

    cout << " dynamic memory address  : " << Dymptr << endl;
    Dymptr->lenght = 70;
    Dymptr->breadth = 90;

    cout << "length:" << Dymptr->lenght << endl;
    cout << "breadth:" << Dymptr->breadth << endl;
    cout << "Dynamic rectangle size: " << (Dymptr->lenght * Dymptr->breadth) << endl;

    delete Dymptr; // Free the allocated memory
    Dymptr = nullptr;
    cout<< "deleted memory : " << Dymptr << endl;
}
