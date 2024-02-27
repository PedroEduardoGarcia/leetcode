#include <iostream>
#include <string>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int ans = 0;
        for (char s : stones) {
            for (char j : jewels) {
                if (s == j) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};

int main() {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    Solution solution;
    std::cout << solution.numJewelsInStones(jewels, stones);

    return 0;
}