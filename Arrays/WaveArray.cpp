#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void waveArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());  // Sort array
    for (int i = 0; i < arr.size() - 1; i += 2) {
        swap(arr[i], arr[i + 1]);  // Swap adjacent elements
    }
}

int main() {
    vector<int> arr = {10, 90, 49, 2, 1, 5, 23};
    waveArray(arr);
    for (int num : arr) cout << num << " ";
}
