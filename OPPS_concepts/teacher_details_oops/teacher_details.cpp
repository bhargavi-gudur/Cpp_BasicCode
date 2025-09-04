/**
 * @file teacher_details.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of classes and objects
 *  in C++ to manage teacher details.
 * @version 0.2
 * @date 2025-01-26
 */
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief class teacher
 * This class represents a teacher with attributes like name, department, subject, and salary.
 * It includes methods to change the department and access the salary.
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

    /* Constructor to initialize attributes */
    teacher(const string &n, const string &d, const string &s, double sal)
        : name(n), dept(d), subject(s), salary(sal) {}

    /*methods  and member function*/
    void changeDept(const string &newDept)
    {
        dept = newDept;
    }

    /* setter method to access private attribute */
    void setSal(double s)
    {
        salary = s;
    }

    /*getter method to access private attribute */
    double getSal() const
    {
        return salary;
    }
};

/**
 * @brief main function
 * @return int
 */
int main()
{
    teacher techers[] = {
        teacher("bhargavi", "tifac", "embedded system", 90000),
        teacher("bhargav", "tifac", "embedded system", 40000)};

    for (const auto &t : techers)
    {
        cout << "name : " << t.name << endl;
        cout << "subject : " << t.subject << endl;
        cout << "dept : " << t.dept << endl;
        cout << "salary: " << t.getSal() << endl;
    }
    return 0;
}
