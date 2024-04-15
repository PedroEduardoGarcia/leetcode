#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int countMatches(const std::vector<std::vector<std::string>>& items, const std::string& ruleKey, const std::string& ruleValue) {
        int ans = 0;
        int index = 0;

        if (ruleKey == "type") {
            index = 0;
        } else if (ruleKey == "color") {
            index = 1;
        } else if (ruleKey == "name") {
            index = 2;
        }

        for (const auto& item : items) {
            if (item[index] == ruleValue) {
                ans += 1;
            }
        }

        return ans;
    }
};

int main() {
    std::vector<std::vector<std::string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "gold", "iphone"}};
    std::string ruleKey = "color";
    std::string ruleValue = "silver";
    Solution solution;
    
    std::cout << solution.countMatches(items, ruleKey, ruleValue);

    return 0;
}
