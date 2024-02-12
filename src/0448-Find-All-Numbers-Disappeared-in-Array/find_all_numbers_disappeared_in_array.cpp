#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::vector<int> result;

        for (int num : nums) {
            int index = std::abs(num) - 1;
            nums[index] = -std::abs(nums[index]);
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};

int main() {
    std::vector<int> nums = {4,3,2,7,8,2,3,1};
    
    Solution solution;

    std::vector<int> output = solution.findDisappearedNumbers(nums);
    
    for (int i : output) {
        std::cout << i << " ";
    }

    return 0;
}