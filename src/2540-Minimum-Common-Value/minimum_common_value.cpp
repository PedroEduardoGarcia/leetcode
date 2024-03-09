#include <iostream>
#include <vector>

class Solution {
public:
    int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
        int ptr_1 = 0;
        int ptr_2 = 0;

        while (ptr_1 < nums1.size() && ptr_2 < nums2.size()) {
            if (nums1[ptr_1] == nums2[ptr_2]) {
                return nums1[ptr_1];
            }
            if (nums1[ptr_1] > nums2[ptr_2]) {
                ptr_2 += 1;
            }
            else {
                ptr_1 += 1;
            }
        }

        return -1;
    }
};

int main() {
    std::vector<int> nums1 = {1,2,3};
    std::vector<int> nums2 = {2,4};
    Solution solution;

    std::cout << solution.getCommon(nums1, nums2);

    return 0;
}