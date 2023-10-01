#include <iostream>

int main() {
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Return an error code
    }

    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }

    return 0;
}
