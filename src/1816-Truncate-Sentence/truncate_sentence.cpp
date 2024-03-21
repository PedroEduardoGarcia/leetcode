#include <iostream>
#include <sstream>
#include <vector>

class Solution {
public:
    std::string truncateSentence(std::string s, int k) {
        std::stringstream iss(s);
        std::vector<std::string> words;
        std::string word;
        
        while (iss >> word) {
            words.push_back(word);
        }
        
        std::string ans;
        for (int i = 0; i < k && i < words.size(); ++i) {
            ans += words[i];
            if (i < k - 1 && i < words.size() - 1) {
                ans += " ";
            }
        }
        
        return ans;
    }
};

int main() {
    std::string s = "Hello how are you Contestant";
    int k = 4;    
    Solution solution;

    std::cout << solution.truncateSentence(s, k);

    return 0;
}             