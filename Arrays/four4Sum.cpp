#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // O(n log n)
    vector<vector<int>> res;
    int n = nums.size();
    unordered_map<int, vector<pair<int, int>>> twoSumMap;

    // Store all pair sums in a hash map
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            twoSumMap[nums[i] + nums[j]].push_back({i, j});
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Avoid duplicates
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Avoid duplicates

            int rem = target - (nums[i] + nums[j]);
            if (twoSumMap.count(rem)) {
                for (auto &p : twoSumMap[rem]) {
                    int k = p.first, l = p.second;
                    if (k > j) { // Ensure indices are valid
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k < n - 1 && nums[k] == nums[k + 1]) k++; // Skip duplicates
                        while (l < n - 1 && nums[l] == nums[l + 1]) l++;
                    }
                }
            }
        }
    }

    return res;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    for (auto& quad : result) {
        cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << "] ";
    }
}
