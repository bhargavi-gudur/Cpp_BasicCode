/**
 * @file switchEnum.cpp
 * @author Gandla Bhargavi
 * @brief A program to calculate the area of geometric shapes using enums and switch cases.
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 */

#include <iostream>
#include <cmath>

// For M_PI constant
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
//
using std::cin;
using std::cout;
using  std::endl;

/**
 * @brief Enumeration of geometric shapes.
 */
enum geometric_shapes
{
    circle,
    square,
    triangle
};
/**
 * @brief Function to calculate the area of a geometric shape.
 * @param shapes The geometric shape.
 * @param dim The dimension (radius for circle, side length for square and triangle).
 */

void calculateArea(geometric_shapes shapes, double dim)
{
    switch (shapes)
    {
    case circle:
        cout << "Area of Circle: " << M_PI * dim * dim << endl;
        break;
    case square:
        cout << "Area of Square: " << dim * dim << endl;
        break;
    case triangle:
        cout << "Area of Equilateral Triangle: " << (sqrt(3) / 4) * dim * dim << endl;
        break;
    default:
        cout << "Unknown Shape" << endl;
        break;
    }
}
/**
 * @brief Main function to execute the area calculation example.
 * @return int
 */
int main()
{
    geometric_shapes geoshapes;
    double dimensions;
    char choice;

    cout << "Enter the choice (c for Circle, s for Square, t for Triangle): ";
    cin >> choice;

    cout << "Enter the dimension (radius/side length): ";
    cin >> dimensions;

    switch (choice)
    {
    case 'c':
        geoshapes = circle;
        break;
    case 's':
        geoshapes = square;
        break;
    case 't':
        geoshapes = triangle;
        break;
    default:
        cout << "Invalid choice" << endl;
        return 1;
    }

    calculateArea(geoshapes, dimensions);

    return 0;
}


