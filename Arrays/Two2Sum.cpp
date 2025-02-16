#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Sorting required for two-pointer approach
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) return {nums[left], nums[right]};
        else if (sum < target) left++;
        else right--;
    }
    
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15, 1, 8};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty()) cout << result[0] << ", " << result[1] << endl;
}
