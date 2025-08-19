/**
 * @file name_marks_map.cpp
 * @author Gandla Bhargavi
 * @brief Program to store names and marks using map and display sorted results.
 * 
 * This program reads names and marks from the user and stores them in a map.
 * Since map stores keys (names) in sorted order by default, the output will
 * be sorted alphabetically by name.
 * 
 * @version 0.1
 * @date 2025-08-04
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

/**
 * @brief Reads names and marks into a map, then displays them sorted by name.
 * 
 * @param n Number of students.
 */
void storeAndSortMarks(int n) {
    map<string, int> studentMarks;
    string name;
    int marks;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter marks for " << name << ": ";
        cin >> marks;
        studentMarks[name] = marks;
    }

    cout << "\nStudent Marks (Sorted by Name):\n";
    for (auto pair : studentMarks) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

/**
 * @brief Main function to get number of entries and call processing function.
 */
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    storeAndSortMarks(n);

    return 0;
}