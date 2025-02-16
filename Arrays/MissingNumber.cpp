#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& arr) {
    int xor1 = 0, xor2 = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];      // XOR all array elements
        xor2 ^= (i + 1);     // XOR all numbers from 1 to n
    }
    return xor1 ^ xor2;
}

int main() {
    vector<int> arr = {3, 0, 1};
    cout << missingNumber(arr); // Output: 2
}
