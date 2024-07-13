//Problem 4: to find smallest element of array
#include <iostream>                                                                                                                           
using namespace std;

int smaOccurence(int arr[], int size) {
    int min=arr[0];
    for (int i = 1; i< size; i++) {
        if (arr[i] < min) {
            min=arr[i]; 
        }
        
    }

    return min; 
}

int main() {
    int arr[] = {7,5,2,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = smaOccurence(arr, size);
    
        cout << "Smallest Element of array is: " << min << endl;

    return 0;
}

