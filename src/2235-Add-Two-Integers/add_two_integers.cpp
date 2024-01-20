#include <iostream>

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
  int num1 = 12, num2 = 5;
  int solution = Solution().sum(num1, num2);
  std::cout << solution;
  
  return 0;
}