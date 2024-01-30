#include <iostream>
#include <vector>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i++;
                arr.pop_back();
            }
        }
    }
};

int main() {
    std::vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    Solution solution;

    solution.duplicateZeros(arr);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}