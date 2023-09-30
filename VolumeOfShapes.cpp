#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265359;

// Function to calculate the volume of a sphere
double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

// Function to calculate the volume of a cube
double calculateCubeVolume(double sideLength) {
    return pow(sideLength, 3);
}

// Function to calculate the volume of a cylinder
double calculateCylinderVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

// Function to calculate the volume of a cone
double calculateConeVolume(double radius, double height) {
    return (1.0 / 3.0) * PI * pow(radius, 2) * height;
}

// Function to calculate the volume of a rectangular prism
double calculateRectangularPrismVolume(double length, double width, double height) {
    return length * width * height;
}

// Function to calculate the volume of an ellipsoid
double calculateEllipsoidVolume(double a, double b, double c) {
    return (4.0 / 3.0) * PI * a * b * c;
}

int main() {
    char shapeType;
    cout << "Enter the type of shape (S for Sphere, C for Cube, Y for Cylinder, O for Cone, R for Rectangular Prism, E for Ellipsoid): ";
    cin >> shapeType;

    if (shapeType == 'S' || shapeType == 's') {
        double radius;
        cout << "Enter the radius of the sphere: ";
        cin >> radius;
        double volume = calculateSphereVolume(radius);
        cout << "The volume of the sphere is: " << volume << endl;
    } else if (shapeType == 'C' || shapeType == 'c') {
        double sideLength;
        cout << "Enter the side length of the cube: ";
        cin >> sideLength;
        double volume = calculateCubeVolume(sideLength);
        cout << "The volume of the cube is: " << volume << endl;
    } else if (shapeType == 'Y' || shapeType == 'y') {
        double radius, height;
        cout << "Enter the radius of the cylinder: ";
        cin >> radius;
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        double volume = calculateCylinderVolume(radius, height);
        cout << "The volume of the cylinder is: " << volume << endl;
    } else if (shapeType == 'O' || shapeType == 'o') {
        double radius, height;
        cout << "Enter the radius of the cone: ";
        cin >> radius;
        cout << "Enter the height of the cone: ";
        cin >> height;
        double volume = calculateConeVolume(radius, height);
        cout << "The volume of the cone is: " << volume << endl;
    } else if (shapeType == 'R' || shapeType == 'r') {
        double length, width, height;
        cout << "Enter the length, width, and height of the rectangular prism: ";
        cin >> length >> width >> height;
        double volume = calculateRectangularPrismVolume(length, width, height);
        cout << "The volume of the rectangular prism is: " << volume << endl;
    } else if (shapeType == 'E' || shapeType == 'e') {
        double a, b, c;
        cout << "Enter the semi-axes lengths (a, b, and c) of the ellipsoid: ";
        cin >> a >> b >> c;
        double volume = calculateEllipsoidVolume(a, b, c);
        cout << "The volume of the ellipsoid is: " << volume << endl;
    } else {
        cout << "Invalid shape type. Please enter S, C, Y, O, R, or E." << endl;
    }

    return 0;
}
