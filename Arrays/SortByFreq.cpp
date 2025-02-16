#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> sortByFrequency(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) freq[num]++;  // Count frequency

    sort(arr.begin(), arr.end(), [&](int a, int b) {
        return freq[a] == freq[b] ? a < b : freq[a] > freq[b]; 
        // Higher frequency first, then smaller number
    });

    return arr;
}

int main() {
    vector<int> arr = {4, 5, 6, 5, 4, 3, 2, 2, 8, 1, 1, 1};
    vector<int> res = sortByFrequency(arr);

    for (int num : res) cout << num << " ";
}
