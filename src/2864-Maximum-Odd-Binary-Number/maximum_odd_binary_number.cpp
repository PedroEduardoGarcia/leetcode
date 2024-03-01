#include <iostream>
#include <string>

class Solution {
public:
    std::string maximumOddBinaryNumber(std::string s) {
        int ones = 0;

        for (char c : s) {
            if (c == '1') {
                ones += 1;
            }
        }

        std::string ans;

        for (size_t i = 0; i < s.length() - 1; i++) {
            if (ones > 1) {
                ans += '1';
                ones -= 1;
            }
            else {
                ans += '0';
            }
        }

        ans += '1';

        return ans;
    }
};

int main() {
    std::string s = "0101";

    Solution solution;

    std::cout << solution.maximumOddBinaryNumber(s); 

    return 0;
}