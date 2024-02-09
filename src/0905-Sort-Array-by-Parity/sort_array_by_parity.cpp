#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        int even_index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                std::swap(nums[i], nums[even_index]);
                even_index++;
            }
        }
        return nums;
    }
};

int main() {
    std::vector<int> nums = {3,1,2,4};
    
    Solution solution;

    std::vector<int> output = solution.sortArrayByParity(nums);
    
    for (int i : output) {
        std::cout << i << " ";
    }

    return 0;
}