#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        std::string str1, str2;

        for (const std::string& w : word1) {
            str1 += w;
        }

        for (const std::string& w : word2) {
            str2 += w;
        }

        return str1 == str2;
    }
};

int main() {
    std::vector<std::string> word1 = {"ab", "c"};
    std::vector<std::string> word2 = {"a", "bc"};

    Solution solution;
    std::cout << std::boolalpha << solution.arrayStringsAreEqual(word1, word2);

    return 0;
}