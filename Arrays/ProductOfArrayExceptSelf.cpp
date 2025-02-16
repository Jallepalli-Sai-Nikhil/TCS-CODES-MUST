#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, 1);
    
    // Compute prefix product in res itself
    int left = 1;
    for (int i = 0; i < n; i++) {
        res[i] = left;
        left *= arr[i]; // Update left product
    }
    
    // Compute suffix product in res itself
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= right; // Multiply with suffix product
        right *= arr[i]; // Update right product
    }
    
    return res;
}

int main() {
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int> res = productExceptSelf(arr);

    for (int val : res)
        cout << val << " ";
}
