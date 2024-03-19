#include <iostream>
#include <vector>

class Solution {
public:
    int xorOperation(int n, int start) {
        std::vector<int> nums;

        for (int i = 0; i < n; ++i) {
            nums.push_back(start + 2 * i);
        }
        
        int ans = nums[0];

        for (size_t i = 1; i < nums.size(); ++i) {
            ans ^= nums[i];
        }
        
        return ans;
    }
};

int main() {
    int n = 4;
    int start = 3;
    Solution solution;

    std::cout << solution.xorOperation(n, start);

    return 0;
}