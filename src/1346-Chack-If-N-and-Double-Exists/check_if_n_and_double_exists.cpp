#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> seen;
        for (int num : arr) {
            if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main() {
    std::vector<int> arr = {10,2,5,3};

    Solution solution;

    std::cout << std::boolalpha << solution.checkIfExist(arr) << std::endl; 

    return 0;
}