/**
 * @file qudration_equation.cpp
 * @author Gandla Bhargavi
 * @brief This program defines a class to solve quadratic equations based 
 * on user input for coefficients and choice of root type.
 * 
 * @version 0.1
 * @date 2026-05-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <cmath>
#include <iomanip>

// Using declarations for standard library components std:: not required to be repeated
using  std::endl;
using  std::cout;
using  std::cin;
using std::fixed;
using std::setprecision;
using std::sqrt;

/**
 * @brief  The QuadraticEquation class encapsulates the properties 
 * and methods to solve a quadratic equation of the form ax^2 + bx + c = 0.
 * 
 */
class QuadraticEquation
{
private:
    float a, b, c;      // coefficients (hidden from outside)
    float discriminant; // internal calculation
    float realPart, imaginaryPart;

public:
    // Constructor initializes coefficients
    QuadraticEquation(float coefA, float coefB, float coefC)
        : a(coefA), b(coefB), c(coefC)
    {
        discriminant = (( b * b )- (4 * a * c));
    }

    void discriminant_greater()
    {
        cout << fixed << setprecision(2);
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    void discriminant_equal()
    {
        cout << fixed << setprecision(2);
        float x = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x << endl;
    }

    void discriminant_lesser()
    {
        cout << fixed << setprecision(2);
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    // Switch-case dispatcher
    void displayRoots(int choice)
    {
        if (a == 0)
        {
            cout << "Not a quadratic equation." << endl;
            return;
            
        }

        switch (choice)
        {
        case 1:
            if (discriminant > 0)
                discriminant_greater();
            else
                cout << "Discriminant not > 0, cannot show distinct real roots." << endl;
            break;

        case 2:
            if (discriminant == 0)
                discriminant_equal();
            else
                cout << "Discriminant not = 0, cannot show equal real roots." << endl;
            break;

        case 3:
            if (discriminant < 0)
                discriminant_lesser();
            else
                cout << "Discriminant not < 0, cannot show complex roots." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }
    }
};
/**
 * @brief   The main function prompts the user to enter the coefficients of the quadratic equation and
 * the type of roots they want to display. It then creates an instance of the QuadraticEquation class
 * and calls the displayRoots method to show the appropriate roots based on the user's choice.
 * 
 * @return int 
 */
int main()
{
    float a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    QuadraticEquation eq(a, b, c);

    int choice;
    cout << "\nChoose root type to display:\n";
    cout << "1. Real and Different\n";
    cout << "2. Real and Same\n";
    cout << "3. Complex Roots\n";
    cout << "Enter choice: ";
    cin >> choice;

    eq.displayRoots(choice);

    return 0;
}
