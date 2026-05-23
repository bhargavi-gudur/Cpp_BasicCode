/**
 * @file number_frequency.cpp
 * @author Gandla Bhargavi
 * @brief Program to count the frequency of each number using map.
 * 
 * This program reads a list of integers from the user and prints how many times
 * each number appears using a map. Duplicate numbers are counted accurately.
 * 
 * @version 0.1
 * @date 2025-08-01
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Counts the frequency of each number using map and displays it.
 * 
 * @param arr The array of numbers.
 * @param size The number of elements in the array.
 */
void countNumberFrequency(int arr[], int size) {
    map<int, int> freq;

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    cout << "Number frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

/**
 * @brief Main function to take input and display number frequencies.
 */
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    countNumberFrequency(arr, size);

    return 0;
}