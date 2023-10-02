#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int birthYear, birthMonth, birthDay;

    // Input: Enter birth year
    cout << "Enter your birth year (e.g., 1990): ";
    cin >> birthYear;

    // Input: Enter birth month
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;

    // Input: Enter birth day
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    // Get the current date
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);

    // Calculate the age
    int currentYear = localTime->tm_year + 1900;
    int currentMonth = localTime->tm_mon + 1;
    int currentDay = localTime->tm_mday;

    int age = currentYear - birthYear;

    // Adjust the age if the birthdate hasn't occurred yet this year
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    // Output: Display the calculated age
    cout << "Your age is: " << age << " years" << endl;

    return 0; // Exit successfully
}
