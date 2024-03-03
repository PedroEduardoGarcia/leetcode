#include <iostream>

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) return n;
        else return n * 2;
    }
};

int main() {
    int n = 5;

    Solution solution;

    std::cout << solution.smallestEvenMultiple(n); 

    return 0;
}