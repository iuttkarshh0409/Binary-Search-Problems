#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int n = size; // As size is n, it means array length is n and elements are from 0 to n
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    // Calculate the sum of array elements
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    // The difference between the expected sum and actual sum is the missing number
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1,2,4,5,6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missingNumber = findMissingNumber(arr, size);
    cout << "The missing number is: " << -missingNumber << endl;

    return 0;
}
