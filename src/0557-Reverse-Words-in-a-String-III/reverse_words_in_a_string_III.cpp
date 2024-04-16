#include <iostream>
#include <string>
#include <sstream>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream iss(s);
        std::string result;
        std::string word;

        while (iss >> word) {
            std::reverse(word.begin(), word.end());
            
            if (!result.empty()) {
                result += " ";
            }
            result += word;
        }
        
        return result;
    }
};

int main() {
    std::string s = "Let's take LeetCode contest";
    Solution solution;

    std::cout << solution.reverseWords(s) << std::endl;
    return 0;
}