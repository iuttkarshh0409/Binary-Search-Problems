//Problem to find smallest element of array
#include <iostream>                                                                                                                           
using namespace std;

int larOcurence(int arr[], int size) {
    int max=arr[0];
    for (int i = 1; i< size; i++) {
        if (arr[i] > max) {
            max=arr[i]; 
        }
        
    }

    return max; 
}

int main() {
    int arr[] = {7,5,2,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = larOcurence(arr, size);
    
        cout << "Largest Element of array is: " << max << endl;

    return 0;
}

