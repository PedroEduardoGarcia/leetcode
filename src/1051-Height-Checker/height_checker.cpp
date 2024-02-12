#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        std::vector<int> expected = heights;
        std::sort(expected.begin(), expected.end());
        
        int count = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }
    
        return count;
    }
};

int main() {
    std::vector<int> heights = {1,1,4,2,1,3};

    Solution solution;
    
    std::cout << solution.heightChecker(heights) << std::endl;

    return 0;
}