#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        int arr_len = arr.size() - 1;
        int great_right;

        while (arr_len >= 0) {
            if (arr_len == arr.size() - 1) {
                great_right = arr[arr_len];
                arr[arr_len] = -1;
            }
            else {
                int n = arr[arr_len];
                arr[arr_len] = great_right;

            if (great_right < n) great_right = n;
            }
            arr_len--;
        }
        return arr;
    }
};

int main() {
    std::vector<int> arr = {17,18,5,4,6,1};

    Solution solution;
    solution.replaceElements(arr);
    
    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}