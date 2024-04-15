#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        std::string ans(s.length(), ' '); 

        for (int i = 0; i < indices.size(); ++i) {
            ans[indices[i]] = s[i];
        }

        return ans;
    }
};

int main() {
    std::string s = "codeleet";
    std::vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    Solution solution;

    std::cout << solution.restoreString(s, indices);
    
    return 0;
}