#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<pair<int, int>> findPairsWithSum(int arr[], int size, int target) {
    unordered_map<int, int> map;
    vector<pair<int, int>> result;
    
    for (int i = 0; i < size; i++) {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()) {
            result.push_back({arr[i], complement});
        }
        map[arr[i]] = i;
    }
    
    return result;
}

