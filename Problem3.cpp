//Problem 3: to find last occurence of key
#include <iostream>                                                                                                                           
using namespace std;

int lastOccurence(int arr[], int size, int key) {
    int lastIndex=-1;
    for (int i = 0; i< size; i++) {
        if (arr[i] == key) {
            lastIndex= i; 
        }
    }

    return lastIndex; 
}

int main() {
    int i;
    int arr[] = {7,5,0,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    int lastIndex = lastOccurence(arr, size, key);
    
    if(lastIndex != -1)
        cout << "Element last occured  at index: " << lastIndex << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

