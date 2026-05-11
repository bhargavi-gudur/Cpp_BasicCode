/**
 * @file duplicate_finder.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program finds duplicate numbers in an array using vector.
 *   Demonstrates OOP concepts and abstraction in C++.
 * @date 11-05-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Abstract class for duplicate checking
 */
class DuplicateChecker {
public:

    // Pure virtual function (Abstraction)
    virtual void findDuplicates() = 0;
};

/**
 * @brief Class for Array Processing
 */
class ArrayProcessor : public DuplicateChecker {

private:
    vector<int> numbers;

public:

    /**
     * @brief Initialize vector values
     */
    void initData() {

        numbers.push_back(2);
        numbers.push_back(5);
        numbers.push_back(3);
        numbers.push_back(2);
        numbers.push_back(7);
        numbers.push_back(5);
        numbers.push_back(9);
    }

    /**
     * @brief Find duplicate numbers
     */
    void findDuplicates() override {

        cout << "\nDuplicate Numbers:\n";

        for(int i = 0; i < numbers.size(); i++) {

            bool alreadyPrinted = false;

            // Check already printed
            for(int k = 0; k < i; k++) {

                if(numbers[i] == numbers[k]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if(alreadyPrinted)
                continue;

            // Check duplicates
            for(int j = i + 1; j < numbers.size(); j++) {

                if(numbers[i] == numbers[j]) {
                    cout << numbers[i] << endl;
                    break;
                }
            }
        }
    }

    /**
     * @brief Display vector elements
     */
    void showArray() {

        cout << "Array Elements:\n";

        for(int i = 0; i < numbers.size(); i++) {
            cout << numbers[i] << " ";
        }

        cout << endl;
    }
};

/**
 * @brief Main function
 */
int main() {

    ArrayProcessor a;

    cout << "===== Duplicate Number Finder =====\n";

    a.initData();

    a.showArray();

    a.findDuplicates();

    return 0;
}