//Problem 2: to find first occurence of key
#include <iostream>                                                                                                                           
using namespace std;

int firstOccurence(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int i;
    int arr[] = {7,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    int result = firstOccurence(arr, size, key);
    
    if(result != -1)
        cout << "Element first occured  at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
