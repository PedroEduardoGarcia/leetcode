#include <iostream>
#include <vector>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int even_digits_count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;

            //  In C++, the condition while (nums[i] > 1) is more strict. nums[i] should be > 0
            while (nums[i] > 0) {
                nums[i] = nums[i] / 10;
                count += 1;
            }
            if (count % 2 == 0) {
                even_digits_count += 1;
            }
        }
        return even_digits_count;
    }
};

int main() {
    std::vector<int> nums = {12,345,2,6,7896};
    Solution solution;

    std::cout << solution.findNumbers(nums) << std::endl;

    return 0;
}