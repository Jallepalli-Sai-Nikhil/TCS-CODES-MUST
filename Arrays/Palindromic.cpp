#include <iostream>
#include <vector>
using namespace std;

bool isPalindromicArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};
    cout << (isPalindromicArray(arr) ? "Yes" : "No");
}
