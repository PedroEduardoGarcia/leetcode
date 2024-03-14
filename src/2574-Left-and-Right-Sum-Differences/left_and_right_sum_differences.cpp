#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        int left = 0;
        int right = 0;
        std::vector<int> ans = {};

        for (auto n : nums) {
            right += n;
        }

        for (auto n : nums) {
            right -= n;
            ans.push_back(std::abs(left - right));
            left +=n;
        }

        return ans;
    }
};

int main() {
    std::vector<int> nums = {10,4,8,3};
    Solution solution;

    std::vector<int> output =  solution.leftRightDifference(nums);

    return 0;
}