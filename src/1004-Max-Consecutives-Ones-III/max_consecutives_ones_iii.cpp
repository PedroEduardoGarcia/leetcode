#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int flips = 0;
        int consecutive = 0;

        while (right < nums.size()) {
            if (nums[right] == 0) {
                flips += 1;
            }

            while (flips > k) {
                if (nums[left] == 0) {
                    flips -= 1;
                }
                left += 1;
            }

            consecutive = std::max(consecutive, right - left + 1);
            right += 1;
        }

        return consecutive;
    }
};

int main() {
    std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    
    Solution solution;

    std::cout << solution.longestOnes(nums, k);
    
    return 0;
}