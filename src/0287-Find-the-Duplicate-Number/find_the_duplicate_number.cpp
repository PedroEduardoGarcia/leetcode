#include <iostream>
#include <unordered_set>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> nums_set;
        for (int num : nums) {
            if (nums_set.find(num) != nums_set.end()) {
                return num;
            }
            nums_set.insert(num);
        }
        return -1;
    }
};

int main() {
    std::vector<int> nums = {1, 3, 4, 2, 2};
    Solution solution;
    
    std::cout << solution.findDuplicate(nums);

    return 0;
}