#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create an array of integers to be sorted
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};

    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());

    // Display the sorted array
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
