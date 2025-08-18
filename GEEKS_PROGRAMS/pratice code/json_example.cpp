/**
 * @file json_example.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program demonstrates how to use JSON in C++ 
 *   using the nlohmann/json library.
 *   Features:
 *     - Create a JSON object
 *     - Add values (name, age, scores)
 *     - Convert to string and print
 *     - Access values from JSON
 * @date 18-08-2025
 */

#include <iostream>
#include <nlohmann/json.hpp>  // JSON library
using namespace std;
using json = nlohmann::json;

int main() {
    // Create a JSON object
    json student;

    // Insert values
    student["name"] = "Bhargavi";
    student["age"] = 25;
    student["skills"] = {"C++", "Python", "Embedded"};
    student["score"] = { {"math", 90}, {"science", 85} };

    // Print JSON as formatted string
    cout << "Student JSON:\n" << student.dump(4) << endl;

    // Access values
    cout << "\nName: " << student["name"] << endl;
    cout << "Age: " << student["age"] << endl;
    cout << "Math Score: " << student["score"]["math"] << endl;

    return 0;
}