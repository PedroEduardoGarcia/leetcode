#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> output;
        for (int i = 1; i < n + 1; i++){
            if (i % 3 == 0){
                if (i % 5 == 0){
                    output.push_back("FizzBuzz");
                }
                else {
                    output.push_back("Fizz");
                }
            }
            else if (i % 5 == 0){
                output.push_back("Buzz");
            }
            else {
                output.push_back(std::to_string(i));
            }
        }
        return output;
    }
};

int main() {
  int n = 15;
  Solution solution;
  std::vector<std::string> result = solution.fizzBuzz(n);

  for (std::string i : result) {
    std::cout << i << " ";
  }

  return 0;
}