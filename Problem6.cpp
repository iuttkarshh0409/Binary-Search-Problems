#include <iostream>
using namespace std;

// Function to check for duplicates using brute force approach
bool hasDuplicates(int arr[], int size) {
    // Outer loop to pick each element one by one
    for (int i = 0; i < size - 1; i++) {
        // Inner loop to compare the current element with the rest of the elements
        for (int j = i + 1; j < size; j++) {
            // If a duplicate is found, return true
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    // If no duplicates are found, return false
    return false;
}

int main() {
    int arr[] = {7, 5, 2, 1, 7}; // Initialize the array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    // Call the function to check for duplicates and store the result
    bool result = hasDuplicates(arr, size);
    
    // Print the result
    if (result) {
        cout << "Array has duplicates." << endl;
    } else {
        cout << "Array does not have duplicates." << endl;
    }

    return 0;
}
