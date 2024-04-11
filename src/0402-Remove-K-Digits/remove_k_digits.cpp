#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        std::vector<char> stack;
        
        for (char n : num) {
            while (k > 0 && !stack.empty() && stack.back() > n) {
                stack.pop_back();
                k -= 1;
            }
            stack.push_back(n);
        }
        
        while (k > 0) {
            stack.pop_back();
            k -= 1;
        }

        std::string ans = "";
        bool leadingZero = true;

        for (char c : stack) {
            if (leadingZero && c == '0') continue;
            leadingZero = false;
            ans += c;
        }
        
        return ans.empty() ? "0" : ans;
    }
};

int main() {
    std::string num = "1432219";
    int k = 3;
    Solution solution;

    std::string result = solution.removeKdigits(num, k);
    
    std::cout << "Result: " << result << std::endl;
    return 0;
}