#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        nums.push_back(0);
        int i = 0;
        int n = nums.size();

        for (int j = 0; j < n; ++j) {
            if (nums[j] < 0 || nums[j] >= n) {
                nums[j] = n;
            }
        }
        while (i < n) {
            int j = nums[i];
            if (nums[i] < n && nums[i] != nums[j]) {
                std::swap(nums[i], nums[j]);
            } else {
                i++;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (nums[i] != i) {
                return i;
            }
        }
        return n;
    }
};

int main() {
    std::vector<int> nums = {3,4,-1,1};
    Solution solution;
    
    std::cout << solution.firstMissingPositive(nums);

    return 0;
}