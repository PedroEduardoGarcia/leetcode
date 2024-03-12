#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int ans = 0;

        for (const std::string& s : sentences) {
            int temp = 0;
            std::istringstream iss(s);
            std::string word;

            while (iss >> word) {
                temp += 1;
            }

            if (temp > ans) {
                ans = temp;
            }
        }

        return ans;
    }
};

int main() {
    std::vector<std::string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    Solution solution;

    std::cout << solution.mostWordsFound(sentences);

    return 0;
}