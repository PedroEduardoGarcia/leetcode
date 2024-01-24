#include <iostream>

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if ((num & 1) == 0) {
                num >>= 1;
            }
            else {
                num--;
            }
            steps++;
        }
        return steps;
    }
};

int main() {
    int num = 14;
    Solution solution;
    int result = solution.numberOfSteps(num);

    std::cout << result;
}