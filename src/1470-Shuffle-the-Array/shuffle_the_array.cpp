#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> ans = {};

        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }

        return ans;
    }
};

int main() {
    std::vector<int> nums ={2,5,1,3,4,7};
    int n = 3;

    Solution solution;
    std::vector<int> output =  solution.shuffle(nums, n);

    for (auto it : output) {
        std::cout << it << " ";
    }

    return 0;
}