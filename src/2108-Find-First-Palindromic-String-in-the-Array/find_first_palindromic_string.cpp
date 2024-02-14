#include <iostream>
#include <vector>

class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {

        for (const std::string& word : words) {
            int left = 0;
            int right = word.length() - 1;

            while (left < right) {
                if (word[left] != word[right]) {
                    break;
                }
                left++;
                right--;
            }

            if (left >= right) {
                return word;
            }
        }

        return "";
    }
};

int main() {
    std::vector<std::string> words = {"abc", "car", "ada", "racecar", "cool"};

    Solution solution;

    std::string output = solution.firstPalindrome(words);
    std::cout << output << std::endl;
    
    return 0;
}