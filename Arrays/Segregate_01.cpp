#include <iostream>
#include <vector>
using namespace std;

void segregate01(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        while (arr[left] == 0 && left < right) left++;
        while (arr[right] == 1 && left < right) right--;
        if (left < right) swap(arr[left++], arr[right--]);
    }
}

int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 0};
    segregate01(arr);
    for (int x : arr) cout << x << " ";  // Output: 0 0 0 1 1 1
}
