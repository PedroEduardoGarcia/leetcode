#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int furthestBuilding(std::vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        std::priority_queue<int, std::vector<int>, std::greater<int>> ladder_heap;

        for (int i = 0; i < n - 1; ++i) {
            int cost = heights[i + 1] - heights[i];

            if (cost > 0) {
                if (ladders > 0) {
                    ladder_heap.push(cost);
                    ladders -= 1;
                } else if (!ladder_heap.empty() && cost > ladder_heap.top()) {
                    bricks -= ladder_heap.top();
                    ladder_heap.pop();
                    ladder_heap.push(cost);
                } else {
                    bricks -= cost;
                }
            }

            if (bricks < 0) {
                return i;
            }
        }

        return n - 1;
    }
};

int main() {
    std::vector<int> heights = {4,12,2,7,3,18,20,3,19};
    int bricks = 10;
    int ladders = 2;
    Solution solution;

    std::cout << solution.furthestBuilding(heights, bricks, ladders);
    
    return 0;
}