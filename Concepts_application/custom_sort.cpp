/**
 * @file custom_sort.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates custom sorting using function pointers.
 *   It supports ascending and descending sorting using OOP concepts.
 * @date 18-04-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Class for Sorting Operations
 */
class Sorter {
private:
    vector<int> numbers;

public:

    /**
     * @brief Initialize vector values
     */
    void initData() {
        numbers = {2, 5, 1, 3, 6, 4};
    }

    /**
     * @brief Ascending comparison function
     */
    static bool ascendingCompare(int a, int b) {
        return a < b;
    }

    /**
     * @brief Descending comparison function
     */
    static bool descendingCompare(int a, int b) {
        return a > b;
    }

    /**
     * @brief Custom sort using function pointer
     */
    void customSort(bool(*compareFuncPtr)(int, int)) {

        for (int startIndex = 0; startIndex < numbers.size(); startIndex++) {

            int bestIndex = startIndex;

            for (int currentIndex = startIndex + 1; currentIndex < numbers.size(); currentIndex++) {

                if (compareFuncPtr(numbers[currentIndex], numbers[bestIndex])) {
                    bestIndex = currentIndex;
                }
            }

            swap(numbers[startIndex], numbers[bestIndex]);
        }
    }

    /**
     * @brief Display sorted numbers
     */
    void printNumbers() {
        for (int i = 0; i < numbers.size(); i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
};

/**
 * @brief Main function
 */
int main() {

    Sorter s;
    int choice;

    s.initData();

    cout << "===== Custom Sorting System =====\n";
    cout << "1. Ascending Sort\n";
    cout << "2. Descending Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        s.customSort(Sorter::ascendingCompare);
    }
    else if(choice == 2) {
        s.customSort(Sorter::descendingCompare);
    }
    else {
        cout << "Invalid choice!\n";
        return 0;
    }

    cout << "Sorted Output: ";
    s.printNumbers();

    return 0;
}