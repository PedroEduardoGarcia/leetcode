#include <iostream>
#include <string>

class Solution {
public:
    int countDigits(int num) {
        std::string s = std::to_string(num);
        int ans = 0;

        for (char n : s) {
            if (num % (n - '0') == 0) {
                ans += 1;
            }
        }

        return ans;
    }
};

int main() {
    int num = 121;
    Solution solution;

    std::cout << solution.countDigits(num);

    return 0;
}