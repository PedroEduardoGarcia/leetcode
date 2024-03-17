#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
        std::vector<std::vector<int>> left;
        std::vector<std::vector<int>> right;
        
        for (const auto& interv : intervals) {
            if (interv[1] < newInterval[0]) {
                left.push_back(interv);
            } else if (interv[0] > newInterval[1]) {
                right.push_back(interv);
            } else {
                newInterval = {std::min(interv[0], newInterval[0]), std::max(interv[1], newInterval[1])};
            }
        }
        
        left.push_back(newInterval);
        
        left.insert(left.end(), right.begin(), right.end());
        
        return left;
    }
};

int main() {
    std::vector<std::vector<int>> intervals = {{1,3}, {6,9}};
    std::vector<int> new_interval = {2,5};
    Solution solution;

    std::vector<std::vector<int>> output = solution.insert(intervals, new_interval);

    for (auto it : output) {
        for (auto i : it) {
            std:: cout << i << " ";
        }
    }

    return 0;
}
                
           
                
                