#include <iostream>
#include <algorithm>
#include <string>

class Solution {
public:
    int maxDepth(std::string s) {
        int max_depth = 0;
        int current_depth = 0;
        
        for (char& c : s) {
            if (c == '(') {
                current_depth += 1;
                max_depth = std::max(max_depth, current_depth);
            } else if (c == ')') {
                current_depth -= 1;
            }
        }
        
        return max_depth;
    }
};

int main() {
    std::string s = "(1+(2*3)+((8)/4))+1";
    
    Solution solution;
    
    std::cout << std::boolalpha << solution.maxDepth(s) << std::endl;
    
    return 0;
}