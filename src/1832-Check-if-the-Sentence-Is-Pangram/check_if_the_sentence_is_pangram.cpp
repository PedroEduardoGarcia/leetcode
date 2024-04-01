#include <iostream>
#include <unordered_set>
#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        std::unordered_set<char> alpha {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        std::unordered_set<char> sentence_set(sentence.begin(), sentence.end());

        for (char c : alpha) {
            if (sentence_set.find(c) == sentence_set.end())
                return false;
        }
        return true;
    }
};

int main() {
    std::string sentence = "thequickbrownfoxjumpsoverthelazydog";
    Solution solution;

    std::cout << std::boolalpha << solution.checkIfPangram(sentence) << std::endl;

    return 0;
}