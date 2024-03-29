#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        std::string ans = s; 
        std::transform(ans.begin(), ans.end(), ans.begin(), [](unsigned char c) { return std::tolower(c); });

        return ans;
    }
};

int main() {
    std::string s = "LOVELY";    
    Solution solution;

    std::cout << solution.toLowerCase(s);

    return 0;
}