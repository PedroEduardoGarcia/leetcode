#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        long first_max = LONG_MIN;
        long second_max = LONG_MIN;
        long third_max = LONG_MIN;

        for (int num : nums) {
            if (num > first_max) {
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            } else if (num < first_max && num > second_max) {
                third_max = second_max;
                second_max = num;
            } else if (num < second_max && num > third_max) {
                third_max = num;
            }
        }

        return (third_max != LONG_MIN) ? third_max : first_max;
    }
};


int main() {
    std::vector<int> nums = {2,2,3,1};
    
    Solution solution;

    std::cout << solution.thirdMax(nums);
    
    return 0;
}