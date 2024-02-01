#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        int nums_len = nums.size() - 1;
        while (nums_len >= 0){
            if (nums[nums_len] == val) {
                nums.erase(nums.begin() + nums_len);
            }
            else {
                k++;
            }
            nums_len--;
        }
        return k;
    }
};

int main() {
    std::vector<int> nums = {3,2,2,3};
    int val = 3;
    
    Solution solution;

    std::cout << solution.removeElement(nums, val) << " ";
    for (int i : nums) {
        std::cout << i << " ";
    }

    return 0;
}