#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        std::vector<int> positive = {};
        std::vector<int> negative = {};
        std::vector<int> output = {};

        for (auto n : nums) {
            if (n >= 0) {
                positive.push_back(n);
            }
            else {
                negative.push_back(n);
            }
        }

        for (int i = 0; i < positive.size(); i++) {
            output.push_back(positive[i]);
            output.push_back(negative[i]);
        }

        return output;
    }
};

int main() {
    std::vector<int> nums = {3,1,-2,-5,2,-4};

    Solution solution;

    std::vector<int> output = solution.rearrangeArray(nums);
    
    for (auto n : output){
        std::cout << n << " ";
    }
    
    return 0;
}