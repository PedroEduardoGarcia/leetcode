#include <iostream>
#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int consecutive_ones = 0;
        int max_consecutive_ones = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
            consecutive_ones += 1;

                if (consecutive_ones > max_consecutive_ones) {
                    max_consecutive_ones = consecutive_ones;
                }
            }
            else {
                consecutive_ones = 0;
            }
        }
    return max_consecutive_ones;  
    }
};

int main() {
    std::vector<int> nums = {1,1,0,1,1,1};
    Solution solution;

    std::cout << solution.findMaxConsecutiveOnes(nums) << std::endl;

    return 0;
}