#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;

        // Step 1: Find the first decreasing element from the right
        while (i > 0 && nums[i - 1] >= nums[i]) {
            i--;
        }

        // Step 2: If no such element, reverse the array
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find element just greater than nums[i-1] from right
        int j = nums.size() - 1;
        while (j >= 1 && nums[j] <= nums[i - 1]) {
            j--;
        }

        // Step 4: Swap and reverse the rest
        swap(nums[i - 1], nums[j]);
        reverse(nums.begin() + i, nums.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    sol.nextPermutation(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
