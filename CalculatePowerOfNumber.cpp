#include <iostream>
#include <cmath>

int main() {
    double base, exponent;
    
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exponent;
    
    double result = pow(base, exponent);
    
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;
    
    return 0;
}
