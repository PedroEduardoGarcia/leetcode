#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maxSubarrayLength(std::vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int ans = 0;
        std::unordered_map<int, int> frequency;
        int n = nums.size();

        for (right = 0; right < n; right++) {
            if (frequency.find(nums[right]) == frequency.end()) {
                frequency[nums[right]] = 0;
            }
            frequency[nums[right]] += 1;
            while (frequency[nums[right]] > k) {
                frequency[nums[left]] -= 1;
                left += 1;
            }
            ans = std::max(ans, right - left + 1);
        }
        
        return ans;
    }
};

int main() {
    std::vector<int> nums = {1,2,3,1,2,3,1,2};
    int k = 2;
    Solution solution;
    
    std::cout << solution.maxSubarrayLength(nums, k);

    return 0;
}