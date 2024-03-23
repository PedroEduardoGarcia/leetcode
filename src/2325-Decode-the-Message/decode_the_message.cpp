#include <iostream>
#include <unordered_map>

class Solution {
public:
    std::string decodeMessage(std::string key, std::string message) {
        std::unordered_map<char, char> sub_table;
        int key_index = 0;

        for (char c : key) {
            if (c != ' ' && sub_table.find(c) == sub_table.end()) {
                sub_table[c] = 'a' + key_index;
                key_index++;
                if (key_index == 26)
                    break;
            }
        }

        std::string ans = "";
        for (char c : message) {
            if (c == ' ') {
                ans += ' ';
            } else if (sub_table.find(c) != sub_table.end()) {
                ans += sub_table[c];
            }
        }

        return ans;
    }
};

int main() {
    std::string key = "";
    std::string message = "";
    Solution solution;

    std::cout << solution.decodeMessage(key, message);
    
    return 0;
}