#include <iostream>

int main() {
    int num1, num2;


    std::cout << "Enter the first whole number: ";
    std::cin >> num1;


    std::cout << "Enter the second whole number: ";
    std::cin >> num2;


    int sum = num1 + num2;


    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
