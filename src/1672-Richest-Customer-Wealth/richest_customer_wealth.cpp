#include <iostream>
#include <vector>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int max_wealth = 0;
        for (auto customer: accounts) {
            int customer_wealth = 0;
            for (auto bank: customer) {
                customer_wealth += bank;
            }
            max_wealth = std::max(max_wealth, customer_wealth);
        }
        return max_wealth;
    }
};

int main() {
    std::vector<std::vector<int>> accounts {{1,2,3}, {3,2,1}};
    Solution solution;
    int result = solution.maximumWealth(accounts);

    std::cout << result;

    return 0;
}