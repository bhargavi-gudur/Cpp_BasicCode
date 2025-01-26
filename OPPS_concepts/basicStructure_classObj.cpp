/**
 * @file basicStructure_classObj.cpp
 * @author Gandla bhargavi
 * @brief class and objects
 * @version 0.1
 * @date 2025-01-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <string>
using namespace std;
/**
 * @brief
 *
 */
class teacher
{
    /*access specifier and attributes */
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    /*methods  and member function*/
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    /* setter method to access private attribute */
    void setSal(double s)
    {
        salary = s;
    }
    /*getter method to access private attribute */
    double getSal()
    {
        return salary;
    }
};
/**
 * @brief
 *
 * @return int
 */
int main()
{
    teacher t1;
    t1.name = "bhargavi";
    t1.subject = "embedded system";
    t1.dept = "tifac";
    t1.setSal(90000);

    cout << "name : " << t1.name << endl;
    cout << "subject : " << t1.subject << endl;
    cout << "dept : " << t1.dept << endl;
    cout << "salary:" << t1.getSal() << endl;
    return 0;
}