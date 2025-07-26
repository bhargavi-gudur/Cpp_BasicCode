#include <iostream>
#include <cmath> // for pow()
using namespace std;

// Create a class
class ArmstrongChecker {
public:
    int number;

    // Set the number using a function
    void setNumber(int n) {
        number = n;
    }

    // Function to check Armstrong
    bool isArmstrong() {
        int temp = number;
        int sum = 0;
        int digits = 0;

        // Step 1: Count how many digits
        int t = temp;
        while (t > 0) {
            digits++;
            t = t / 10;
        }

        // Step 2: Sum of digits raised to power
        t = temp;
        while (t > 0) {
            int digit = t % 10;
            sum += pow(digit, digits);  // digit^digits
            t = t / 10;
        }

        // Step 3: Compare
        return sum == number;
    }
};

// Main function
int main() {
    ArmstrongChecker obj;      // create object
    obj.setNumber(153);        // give number to object

    if (obj.isArmstrong())
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}