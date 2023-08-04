#include <iostream>

using namespace std;

// Enumeration type to represent different types of triangles
enum triangleType {
    scalene,     // All sides have different lengths
    isosceles,   // Two sides have the same length
    equilateral, // All sides have the same length
    noTriangle   // Not a valid triangle
};

// Function to determine the type of triangle based on the lengths of its sides
triangleType triangleShape(double side1, double side2, double side3) {
    // Check if the sides form a valid triangle
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        return noTriangle;  // Not a valid triangle
    }
    // Check if all sides have the same length
    if (side1 == side2 && side2 == side3) {
        return equilateral; // All sides have the same length
    }
    // Check if two sides have the same length
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        return isosceles;   // Two sides have the same length
    }
    // If none of the above conditions are met, it must be a scalene triangle
    return scalene;         // All sides have different lengths
}

int main() {
    // Prompt the user to enter the lengths of the sides of the triangle
    cout << "Enter the lengths of the sides of the triangle: ";
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    // Determine the type of triangle
    triangleType type = triangleShape(side1, side2, side3);

    // Output the type of triangle
    switch (type) {
        case equilateral:
            cout << "The triangle is equilateral." << endl;
            break;
        case isosceles:
            cout << "The triangle is isosceles." << endl;
            break;
        case scalene:
            cout << "The triangle is scalene." << endl;
            break;
        case noTriangle:
            cout << "noTriangle." << endl;
            break;
    }

    return 0;
}

//write a program that inputs 3 numbers which ask the user that he needs to input a legth and it will determine if the triangle
//is one of the 4 options that the program would have to consider.
//Types of triagles scalene, isosceles, equialaterial, and noTriangle. 
