#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int removing = nums[nums.size() - 1];
        int k = nums.size();
        int nums_len = nums.size() - 2;

        while (nums_len >= 0) {
            if (nums[nums_len] == removing) {
                nums.erase(nums.begin() + nums_len);
                k--;
            }
            else {
                removing = nums[nums_len];
            }
            nums_len--;
        }
        return k;
    }
};

int main() {
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    Solution solution;

    std::cout << solution.removeDuplicates(nums) << " ";
    for (int i : nums) {
        std::cout << i << " ";
    }

    return 0;
}