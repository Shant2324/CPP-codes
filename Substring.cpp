#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString, subString;
    int startIndex, length;

    // Input: Enter the original string
    cout << "Enter the original string: ";
    getline(cin, inputString);

    // Input: Enter the starting index
    cout << "Enter the starting index (0-based): ";
    cin >> startIndex;

    // Input: Enter the length of the substring
    cout << "Enter the length of the substring: ";
    cin >> length;

    // Validate the input indices
    if (startIndex < 0 || startIndex >= inputString.length() || length < 0 || startIndex + length > inputString.length()) {
        cout << "Invalid input. Check the starting index and length." << endl;
        return 1; // Exit with an error code
    }

    // Create the substring
    subString = inputString.substr(startIndex, length);

    // Output: Display the created substring
    cout << "Substring: " << subString << endl;

    return 0; // Exit successfully
}
