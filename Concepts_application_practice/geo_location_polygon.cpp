/**
 * @file geo_location_polygon.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program checks whether a given point lies inside
 *   or outside a circle and a general polygon (n sides).
 *   It uses distance formula for circle and ray casting
 *   algorithm for polygon.
 * @date 10-04-2026
 */

#include <iostream>
#include <cmath>
using namespace std;

/**
 * @brief Check if point is inside or outside circle
 */
void checkCircle(float x, float y, float cx, float cy, float r) {

    float distance = sqrt((x - cx)*(x - cx) + (y - cy)*(y - cy));

    if(distance <= r)
        cout << "Point is INSIDE the Circle\n";
    else
        cout << "Point is OUTSIDE the Circle\n";
}

/**
 * @brief Check if point is inside polygon using Ray Casting
 * @param n Number of vertices
 * @param x[], y[] Polygon vertices
 * @param px, py Point to check
 */
void checkPolygon(int n, float x[], float y[], float px, float py) {

    bool inside = false;

    for(int i = 0, j = n - 1; i < n; j = i++) {

        if(((y[i] > py) != (y[j] > py)) &&
           (px < (x[j] - x[i]) * (py - y[i]) / (y[j] - y[i]) + x[i])) {

            inside = !inside; // toggle
        }
    }

    if(inside)
        cout << "Point is INSIDE the Polygon\n";
    else
        cout << "Point is OUTSIDE the Polygon\n";
}

/**
 * @brief Main function
 */
int main() {

    float px, py;

    cout << "Enter point (x y): ";
    cin >> px >> py;

    // Circle input
    float cx, cy, r;
    cout << "\nEnter circle center (cx cy): ";
    cin >> cx >> cy;

    cout << "Enter radius: ";
    cin >> r;

    checkCircle(px, py, cx, cy, r);

    // Polygon input
    int n;
    cout << "\nEnter number of polygon vertices: ";
    cin >> n;

    float x[n], y[n];

    cout << "Enter polygon vertices:\n";
    for(int i = 0; i < n; i++) {
        cout << "Vertex " << i+1 << ": ";
        cin >> x[i] >> y[i];
    }

    checkPolygon(n, x, y, px, py);

    return 0;
}