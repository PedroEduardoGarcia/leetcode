#include <iostream>
#include <map>
#include <string>

class Solution {
public:
    std::string customSortString(std::string order, std::string s) {
        std::map<char, int> occ;
        std::string ans = "";

        for (char c : s) {
            occ[c]++;
        }

        for (char c : order) {
            if (occ.find(c) != occ.end()) {
                ans += std::string(occ[c], c);
                occ.erase(c);
            }
        }

        for (const auto& entry : occ) {
            ans += std::string(entry.second, entry.first);
        }

        return ans;
    }
};

int main() {
    std::string order = "hucw";
    std::string s = "utzoampdgkalexslxoqfkdjoczajxtuhqyxvlfatmptqdsochtdzgypsfkgqwbgqbcamdqnqztaqhqanirikahtmalzqjjxtqfnh";
    Solution solution;

    std::cout << solution.customSortString(order, s);

    return 0;
}