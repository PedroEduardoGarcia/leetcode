#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int start = 0, end = s.length() - 1;
        
        while (start <= end && s[start] == ' ') start += 1;
        
        while (end >= 0 && s[end] == ' ') end -= 1;

        std::vector<std::string> words;
        std::string word = "";

        for (int i = start; i <= end; i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }

        if (!word.empty()) words.push_back(word);

        if (words.empty()) return 0;
        
        return words.back().length();
    }
};

int main() {
    std::string s = "   fly me   to   the moon  ";
    Solution solution;

    std::cout << std::boolalpha << solution.lengthOfLastWord(s) << std::endl;

    return 0;
}