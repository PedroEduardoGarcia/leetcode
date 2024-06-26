#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        std::unordered_map<char, char> s_to_t;
        std::unordered_map<char, char> t_to_s;
        
        for (int i = 0; i < s.length(); ++i) {
            char char_s = s[i];
            char char_t = t[i];
            
            if (s_to_t.find(char_s) != s_to_t.end()) {
                if (s_to_t[char_s] != char_t) {
                    return false;
                }
            } else {
                s_to_t[char_s] = char_t;
            }
            
            if (t_to_s.find(char_t) != t_to_s.end()) {
                if (t_to_s[char_t] != char_s) {
                    return false;
                }
            } else {
                t_to_s[char_t] = char_s;
            }
        }
        
        return true;
    }
};

int main() {
    std::string s = "egg";
    std::string t = "add";
    Solution solution;
    
    std::cout << std::boolalpha << solution.isIsomorphic(s, t) << std::endl;
    
    return 0;
}