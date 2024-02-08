#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int non_zero_index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                std::swap(nums[i], nums[non_zero_index]);
                non_zero_index++;
            }
        }
    }
};


int main() {
    std::vector<int> nums = {0,1,0,3,12};
    
    Solution solution;

    solution.moveZeroes(nums);

    for (int i : nums) {
        std::cout << i << " ";
    }
    
    return 0;
}