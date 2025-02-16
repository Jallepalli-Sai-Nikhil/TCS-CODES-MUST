#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int>& arr) {
    int n = arr.size();
    
    // Cyclic Sort: Place each number at its correct index (1-based index)
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // Find the first missing positive
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }

    return n + 1; // If all numbers are present, return next missing number
}

int main() {
    vector<int> arr = {3, 4, -1, 1, -2, 2};
    cout << "First Missing 
