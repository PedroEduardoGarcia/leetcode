#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> ans = {};
        int h = *max_element(std::begin(candies), std::end(candies));

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= h) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};

int main() {
    std::vector<int> candies = {2,3,5,1,3};
    int extra_candies = 3;

    Solution solution;

    std::vector<bool> output = solution.kidsWithCandies(candies, extra_candies);

    for (auto it : output) {
        std::cout << it << " "; 
    }

    return 0;
}