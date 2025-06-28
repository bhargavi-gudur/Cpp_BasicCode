/**
 *@file destructor.cpp
 * @author gandla bhargavi
 * @brief sample program to demostrate destructor.
 * @version 0.1
 * @date 2025-06-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include<iostream>
using namespace std;

/**
 * @brief class student
 *
 */
class student
{
public:
    string name; //member variable
    int rollno;  //member variable

    student(string name, int id) //parameterized constructor
    {
        this->name = name;
        this->rollno = id; 
        cout << "constructor is called" << endl;
    }
    void getdata() //member function
    {
        cout << "name : " << name << endl;
        cout << "rollno : " << rollno << endl;
    }
    ~student() //destructor
    {
        cout << "destructor is called" << endl;
    }

};
/**
 *@brief main function to call the constructor and destructor.
 *
 * @return int
 */
int main()
{
    student s1("bhargavi", 39639); //creating object of student class
    s1.getdata(); //calling member function
    return 0;
}