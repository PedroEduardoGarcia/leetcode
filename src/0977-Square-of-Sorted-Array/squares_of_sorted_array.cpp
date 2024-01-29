#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        
        for(int i = 0; i< nums.size(); i++){
            nums[i] *= nums[i];
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    std::vector<int> nums = {-4,-1,0,3,10};
    Solution solution;

    std::vector<int> result = solution.sortedSquares(nums);

    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}