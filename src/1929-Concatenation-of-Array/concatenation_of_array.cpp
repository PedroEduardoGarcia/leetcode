#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        std::vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());

        return ans;
    }
};

int main() {
    std::vector<int> nums = {1,2,1};
    
    Solution solution;

    std::vector<int> output = solution.getConcatenation(nums);

    for (auto it : output) {
        std::cout << it << " ";
    }
    
    return 0;
}