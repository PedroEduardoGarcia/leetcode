#include <iostream>
#include <vector>

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
        int ans = 0;

        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) ans += 1;
        }

        return ans;
    }
};


int main() {
    std::vector<int> hours = {0,1,2,3,4};
    int target = 2;

    Solution solution;

    std::cout << solution.numberOfEmployeesWhoMetTarget(hours, target);
    
    return 0;
}