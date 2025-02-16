#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minStepsToEqual(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // Sort to find the median
    int median = arr[arr.size() / 2]; 
    int steps = 0;
    for (int num : arr) steps += abs(num - median);
    return steps;
}

int main() {
    vector<int> arr = {1, 2, 3, 9, 10};
    cout << minStepsToEqual(arr); // Output: 14
}
