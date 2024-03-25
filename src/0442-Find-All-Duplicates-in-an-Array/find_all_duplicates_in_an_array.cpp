#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::vector<int> ans = {};

        for(int i = 0; i < nums.size(); i++) {
            int pos = std::abs(nums[i]) - 1;

            if (nums[pos] < 0) {
                ans.push_back(pos + 1);
            }

            nums[pos] = -nums[pos];
        }

        return ans;
    }
};

int main() {
    std::vector<int> nums = {1, 3, 4, 2, 2};
    Solution solution;
    
    std::vector<int> output = solution.findDuplicates(nums);

    for (auto it : output) {
        std::cout << it << " ";
    }

    return 0;
}