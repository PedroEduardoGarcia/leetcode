#include <iostream>

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x = 0;

        num += t;
        x = num + t;
        return x;
    }
};

int main() {
    int num = 3;
    int t = 2;
    
    Solution solution;

    std::cout << solution.theMaximumAchievableX(num, t);
    
    return 0;
}