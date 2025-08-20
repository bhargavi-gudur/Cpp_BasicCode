/**
 * @file interview_programs.cpp
 * @author Gandla Bhargavi
 * @brief Common C++ programs asked in interviews, including list-based sum of digits.
 * @version 0.2
 * @date 2025-08-02
 */

#include <iostream>
#include <cmath>
using namespace std;

void reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number: " << rev << endl;
}

void checkPalindrome(int n) {
    int temp = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << (temp == rev ? "Palindrome" : "Not Palindrome") << endl;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

void isPrime(int n) {
    bool prime = true;
    if (n <= 1) prime = false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) {
            prime = false;
            break;
        }
    cout << (prime ? "Prime" : "Not Prime") << endl;
}

void factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    cout << "Factorial: " << fact << endl;
}

void swapNumbers(int a, int b) {
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap: a=" << a << ", b=" << b << endl;
}

void isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    cout << (sum == n ? "Armstrong" : "Not Armstrong") << endl;
}

void sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

void findMaxInArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    cout << "Max element: " << max << endl;
}

void frequencyInArray(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            count++;
    cout << "Frequency of " << key << ": " << count << endl;
}

void sumOfDigitsInList(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int sum = 0, num = arr[i];
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        cout << "Sum of digits of " << arr[i] << " = " << sum << endl;
    }
}

int main() {
    cout << "--- C++ Interview Programs ---\n";
    reverseNumber(1234);
    checkPalindrome(121);
    fibonacci(5);
    isPrime(7);
    factorial(5);
    swapNumbers(10, 20);
    isArmstrong(153);
    sumOfDigits(456);

    int arr[] = {1, 2, 3, 4, 5, 3, 2};
    findMaxInArray(arr, 7);
    frequencyInArray(arr, 7, 3);

    int list[] = {12, 45, 99, 100};
    sumOfDigitsInList(list, 4);

    return 0;
}