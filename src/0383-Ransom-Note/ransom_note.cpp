#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(const std::string& ransomNote, const std::string& magazine) {
        std::unordered_map<char, int> char_map;

        for (char c : magazine) {
            char_map[c] = char_map[c] + 1;
        }

        for (char c : ransomNote) {
            if (char_map.find(c) == char_map.end() || char_map[c] == 0) {
                return false;
            }
            char_map[c] = char_map[c] - 1;
        }

        return true;
    }
};

int main() {
    std::string magazine = "ab";
    std::string ransomNote = "aa";
    Solution solution;

    std::cout << std::boolalpha << solution.canConstruct(ransomNote, magazine) << std::endl;

    return 0;
}