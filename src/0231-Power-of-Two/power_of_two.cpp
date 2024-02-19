#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    int n = 16;
    
    Solution solution;

    std::cout << solution.isPowerOfTwo(n);
    
    return 0;
}