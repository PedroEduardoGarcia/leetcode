#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int timeRequiredToBuy(std::vector<int>& tickets, int k) {
        int time_taken = 0;

        for (int i = 0; i < tickets.size(); ++i) {
            if (i <= k) {
                time_taken += std::min(tickets[i], tickets[k]);
            } else {
                time_taken += std::min(tickets[i], tickets[k] - 1);
            }
        }

        return time_taken;
    }
};

int main() {
    std::vector<int> tickets = {2, 3, 2};
    int k = 2;
    Solution solution;

    std::cout << solution.timeRequiredToBuy(tickets, k) << std::endl;

    return 0;
}
