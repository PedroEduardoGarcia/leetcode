#include <iostream>

class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;

        for (int i = 0; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                ans += i;
            }
        }

        return ans;
    }
};

int main() {
    int n = 4;    
    Solution solution;

    std::cout << solution.sumOfMultiples(n);

    return 0;
}             