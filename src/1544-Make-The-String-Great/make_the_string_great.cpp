#include <iostream>
#include <stack>
#include <string>
#include <cmath>

class Solution {
public:
    std::string makeGood(std::string s) {
        std::stack<char> stack;
        
        for (char c : s) {
            if (!stack.empty() && abs(stack.top() - c) == 32) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        std::string ans = "";

        while (!stack.empty()) {
            ans = stack.top() + ans;
            stack.pop();
        }
        
        return ans;
    }
};

int main() {
    std::string s = "leEeetcode";
    
    Solution solution;
    
    std::cout << std::boolalpha << solution.makeGood(s) << std::endl;
    
    return 0;
}