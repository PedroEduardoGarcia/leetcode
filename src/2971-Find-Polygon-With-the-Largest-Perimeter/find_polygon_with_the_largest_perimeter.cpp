#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    long long largestPerimeter(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<>());
        long long total_sum = 0;
        long long output = 0;

        for (auto n : nums) {
            total_sum += n;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (output == 0) {
                if (total_sum - (2 * nums[i]) > 0) {
                    output += nums[i];
                }
                else {
                    total_sum -= nums[i];
                }
            }
            else {
                output += nums[i];
            }
        }

        if (output > 0) return output;
        else return -1;
    }
};

int main() {
    std::vector<int> nums = {1,12,1,2,5,50,3};

    Solution solution;

    std::cout << solution.largestPerimeter(nums);
    
    return 0;
}