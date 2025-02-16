#include <iostream>
#include <vector>
using namespace std;

void zigzagArray(vector<int>& arr) {
    bool flag = true;  // true means "<" relation should hold

    for (int i = 0; i < arr.size() - 1; i++) {
        if ((flag && arr[i] > arr[i + 1]) || (!flag && arr[i] < arr[i + 1])) {
            swap(arr[i], arr[i + 1]);
        }
        flag = !flag;  // Flip the flag for next comparison
    }
}

int main() {
    vector<int> arr = {4, 3, 7, 8, 6, 2, 1};
    zigzagArray(arr);
    for (int num : arr) cout << num << " ";
}
