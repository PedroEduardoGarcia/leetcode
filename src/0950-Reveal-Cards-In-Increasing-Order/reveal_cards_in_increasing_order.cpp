#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

class Solution {
public:
    std::vector<int> deckRevealedIncreasing(std::vector<int>& deck) {
        int n = deck.size();
        std::sort(deck.begin(), deck.end());
        std::queue<int> q;

        for (int i = 0; i < n; ++i) {
            q.push(i);
        }
        
        std::vector<int> ans(n, 0);
        
        for (int i = 0; i < n; ++i) {
            ans[q.front()] = deck[i];
            q.pop();

            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }
        
        return ans;
    }
};

int main() {
    std::vector<int> deck = {17, 13, 11, 2, 3, 5, 7};
    Solution solution;
    
    std::vector<int> output = solution.deckRevealedIncreasing(deck);
    
    for (int it : output) {
        std::cout << it << " ";
    }
    
    return 0;
}