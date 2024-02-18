#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minStartValue(std::vector<int>& nums) {
        int min_start = 1;
        int curr_sum = 0;

        for(auto n : nums) {
            curr_sum += n;
            min_start = std::max(min_start, 1 - curr_sum);
        }

        if (min_start > 0) return min_start;
        else return 1;
    }
};

int main() {
    std::vector<int> nums = {-3,2,-3,4,2};

    Solution solution;
    std::cout << solution.minStartValue(nums);

    return 0;
}