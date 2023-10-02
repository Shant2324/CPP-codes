#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Input
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1; // Exit with an error code
    }

    // Output
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0; // Exit successfully
}
