#include <iostream>

class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;

        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
                ans += n;
            }
            else {
                n = ((n - 1) / 2) + 1;
                ans += n - 1;
            }
        }
        
        return ans;
    }
};

int main() {
    int n = 7;
    Solution solution;

    std::cout << solution.numberOfMatches(n);

    return 0;
}