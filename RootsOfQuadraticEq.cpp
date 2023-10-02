#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    std::cin >> a >> b >> c;
    
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Two real roots: " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "One real root: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
    
    return 0;
}
