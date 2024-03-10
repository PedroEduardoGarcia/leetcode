#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> ans;
        for (int num : set1) {
            if (set2.find(num) != set2.end()) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};

int main() {
    std::vector<int> nums1 = {1,2,2,1};
    std::vector<int> nums2 = {2,2};
    Solution solution;

    std::vector<int> output = solution.intersection(nums1, nums2);

    for (auto it : output) {
        std::cout << it << " ";
    }

    return 0;
}