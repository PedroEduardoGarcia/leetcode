#include <iostream>
#include <vector>

class Solution {
public:
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }
        
        int product = 1;
        int ans = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];

            while (product >= k) {
                product /= nums[left];
                left += 1;
            }
            
            ans += right - left + 1;
        }
        
        return ans;
    }
};

int main() {
    std::vector<int> nums = {10,5,2,6};
    int k = 100;
    Solution solution;
    
    std::cout << solution.numSubarrayProductLessThanK(nums, k);

    return 0;
}