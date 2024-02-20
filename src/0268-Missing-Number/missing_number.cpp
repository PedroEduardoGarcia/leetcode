#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int nums_len = nums.size();
        int total_sum = 0;
        int missing = 0;

        for (int i = 0; i < nums_len; i++) {
            total_sum += i;
            missing += nums[i];
        }

        return total_sum - missing + nums_len;
    }
};

int main() {
    std::vector<int> nums = {9,6,4,2,3,5,7,0,1};
    
    Solution solution;

    std::cout << solution.missingNumber(nums);
    
    return 0;
}