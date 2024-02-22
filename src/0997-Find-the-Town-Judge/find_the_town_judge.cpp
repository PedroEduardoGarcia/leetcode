#include <iostream>
#include <vector>

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        std::vector<int> in_degree(n, 0);
        std::vector<int> out_degree(n, 0);
        std::vector<int> ans;

        for (auto t : trust) {
            out_degree[t[0] - 1] += 1;
            in_degree[t[1] - 1] += 1;
        }

        for (int i = 0; i < in_degree.size(); i++) {
            if (in_degree[i] == n - 1) {
                if (out_degree[i] == 0) {
                    ans.push_back(i + 1);
                }
            } 
        }
        if (ans.size() == 1) return ans[0];
        else -1;
    }
};

int main() {
    int n = 3;
    std::vector<std::vector<int>> trust = {{1,3}, {2,3}, {3,1}};
    
    Solution solution;

    std::cout << solution.findJudge(n, trust);
    
    return 0;
}