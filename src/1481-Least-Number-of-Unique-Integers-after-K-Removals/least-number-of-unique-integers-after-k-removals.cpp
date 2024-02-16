#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int findLeastNumOfUniqueInts(std::vector<int>& arr, int k) {
        std::unordered_map<int, int> frequency_map;

        for (int num : arr) {
            frequency_map[num]++;
        }

        int n = frequency_map.size();
        std::vector<std::pair<int, int>> sorted_frequency(n);
        
        int i = 0;
        for (auto p : frequency_map) {
            sorted_frequency[i].first = p.second;
            sorted_frequency[i].second = p.first;
            i++;
        }

        std::sort(sorted_frequency.begin(), sorted_frequency.end());

        i = 0;
        int output = sorted_frequency.size();
        while (k > 0) {
            while (sorted_frequency[i].first > 0 && k > 0) {
                sorted_frequency[i].first -= 1;
                k--;
            } 
            if (sorted_frequency[i].first == 0) {
                i++;
                output--;
            }
        }

        return output;
    }
};

int main() {
    std::vector<int> arr = {4,3,1,1,3,3,2};
    int k = 3;
    Solution solution;

    std::cout << solution.findLeastNumOfUniqueInts(arr, k);
    
    return 0;
}