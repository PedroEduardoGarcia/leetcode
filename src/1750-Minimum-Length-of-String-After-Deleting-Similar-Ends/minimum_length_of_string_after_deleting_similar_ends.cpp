#include <iostream>
#include <string>

class Solution {
public:
    int minimumLength(std::string s) {
        int left = 0;
        int right = s.size() - 1;

        if (s.size() == 1) return 1;

        while (left < right && s[left] == s[right]) {
            char c = s[left];

            while (left <= right && s[left] == c) {
                left += 1;
            }
            while (right >= left && s[right] == c) {
                right -= 1;
            }
        }

        int ans = right - left + 1;
        return ans;
    }
};

int main() {
    std::string s = "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb";
    Solution solution;

    std::cout << solution.minimumLength(s);

    return 0;
}