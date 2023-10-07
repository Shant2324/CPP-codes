#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}
