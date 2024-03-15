#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> left_products (n, 1);
        std::vector<int> right_products (n, 1);
        std::vector<int> ans(n, 1);
        
        for (int i = 1; i < n; i++) {
            left_products [i] = left_products [i - 1] * nums[i - 1];
        }
        
        for (int i = n - 2; i >= 0; i--) {
            right_products [i] = right_products [i + 1] * nums[i + 1];
        }
        
        for (int i = 0; i < n; i++) {
            ans[i] = left_products [i] * right_products [i];
        }
        
        return ans;
    }
};

int main() {
    std::vector<int> nums = {1,2,3,4};
    Solution solution;

    std::vector<int> output =  solution.productExceptSelf(nums);

    for (auto it : output) {
        std::cout << it << " ";
    }

    return 0;
}