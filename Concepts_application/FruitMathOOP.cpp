/**
 * @file FruitMathOOP.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates Apple + Banana = Total calculation using class, object, and inheritance.
 *
 * This program defines a base class Fruit with a derived class AppleBanana
 * to calculate the remaining fruit count when Apple is known and Total is fixed.
 *
 * @version 0.1
 * @date 2025-09-26
 */

#include <iostream>
using namespace std;

/**
 * @brief Base class representing a fruit with a total count.
 */
class Fruit {
protected:
    int total;   // Total fruits
public:
    Fruit(int t) : total(t) {}  // Constructor to set total
    int getTotal() const { return total; }
};

/**
 * @brief Derived class to calculate Banana count when Apple is known.
 */
class AppleBanana : public Fruit {
private:
    int apple;   // Number of apples
    int banana;  // Number of bananas
public:
    AppleBanana(int totalFruits, int appleCount)
        : Fruit(totalFruits), apple(appleCount), banana(0) {}

    void calculateBanana() {
        banana = total - apple;  // Banana = Total - Apple
    }

    void displayResult() const {
        cout << "Apple = " << apple << endl;
        cout << "Total (Apple + Banana) = " << total << endl;
        cout << "Banana = " << banana << endl;
    }
};

/**
 * @brief Main function that demonstrates OOP solution.
 */
int main() {
    // Create an object with total = 100 and apple = 66
    AppleBanana fb(100, 66);
    fb.calculateBanana();
    fb.displayResult();

    return 0;
}