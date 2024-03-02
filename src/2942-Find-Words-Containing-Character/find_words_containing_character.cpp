#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> ans = {};
        int i = 0;

        for (const std::string& w : words) {
            if (w.find(x) != std::string::npos) {
                ans.push_back(i);
            }
            i += 1;
        }

        return ans;
    }
};

int main() {
    std::vector<std::string> words = {"leet","code"};
    char x = 'e';
    
    Solution solution;

    std::vector<int> output = solution.findWordsContaining(words, x);

    for (auto it : output) {
        std::cout << it << " ";
    }
    
    return 0;
}