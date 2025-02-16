#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> replaceByRank(vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());  // Sort array

    unordered_map<int, int> rank;
    int r = 1;  
    for (int num : sortedArr) {
        if (rank.find(num) == rank.end())  // Assign rank only if not already assigned
            rank[num] = r++;
    }

    for (int& num : arr) num = rank[num];  // Replace elements with ranks

    return arr;
}

int main() {
    vector<int> arr = {40, 10, 20, 30};
    vector<int> res = replaceByRank(arr);

    for (int num : res) cout << num << " ";
}
