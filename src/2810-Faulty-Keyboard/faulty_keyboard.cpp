#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string finalString(const std::string& s) {
        std::string ans = "";

        for (char c : s) {
            if (c == 'i') {
                std::reverse(ans.begin(), ans.end());
            } else {
                ans += c;
            }
        }

        return ans;
    }
};

int main() {
    std::string s = "string";
    Solution solution;

    std::cout << solution.finalString(s) << std::endl;

    return 0;
}