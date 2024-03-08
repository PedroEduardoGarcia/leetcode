#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        std::unordered_map<int, int> frequencies;
        int max_frequency = 0;
        int ans = 0;

        for (int num : nums) {
            if (frequencies.find(num) != frequencies.end()) {
                frequencies[num] += 1;
            } 
            else {
                frequencies[num] = 1;
            }

            if (max_frequency < frequencies[num]) {
                max_frequency = frequencies[num];
            }
        }

        for (const auto& entry : frequencies) {
            if (entry.second == max_frequency) {
                ans++;
            }
        }

        return ans * max_frequency;
    }
};

int main() {
    std::vector<int> nums = {1,2,2,3,1,4};

    Solution solution;

    std::cout << solution.maxFrequencyElements(nums);

    return 0;
}