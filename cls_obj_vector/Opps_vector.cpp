/**
 * @file Opps_vector.cpp
 * @author Gandla Bhargavi
 * @brief  A simple C++ program to demonstrate class and object using vector.
 * @version 0.1
 * @date 2024-10-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief   student class create and  student object created
 *
 */
class Student
{
private:
    string name;
    int age;

public:
    Student(string n, int a);
    void display();
    ~Student();
};
/**
 * @brief  parameterised constructor student details
 *
 * @param n
 * @param a
 * @return Student
 */
Student ::Student(string n, int a) : name(n), age(a) {}
/**
 * @brief display method student details printed on screen
 *
 */
void Student ::display()
{
    cout << "name: " << name << "\t" << "age:" << age << endl;
}
/**
 * @brief Destroy the Student:: Student object
 *
 */
Student::~Student() {}
/**
 * @brief main function created vector of student object
 *  and display student details.
 *
 * @return int
 */
int main()
{

    // Create a vector of Student objects
    vector<Student> students;

    // Add students to the vector
    students.push_back(Student("Alice", 20));
    students.push_back(Student("Bob", 22));

    // Display student details
    for (auto &student : students)
    {
        student.display();
    }
    return 0;
}