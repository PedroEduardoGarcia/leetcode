#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums) {
        std::vector<int> arr;
        std::sort(nums.begin(), nums.end());
        int i = 0;

        while (i < nums.size()) {
            arr.push_back(nums[i + 1]);
            arr.push_back(nums[i]);
            i += 2;
        }

        return arr;
    }
};

int main() {
    std::vector<int> nums = {5,4,2,3};
    
    Solution solution;

    std::vector<int> output = solution.numberGame(nums);
    
    for (auto it : output) {
        std::cout << it << " ";
    }

    return 0;
}