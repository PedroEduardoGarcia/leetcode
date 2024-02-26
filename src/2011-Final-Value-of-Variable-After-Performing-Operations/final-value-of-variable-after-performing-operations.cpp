#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int x = 0;
        
        for (const std::string& s : operations) {
            if (s.find('+') != std::string::npos) {
                x += 1;
            } else {
                x -= 1;
            }
        }
        return x;
    }
};

int main() {
    std::vector<std::string> operations = {"--X","X++","X++"};

    Solution solution;

    std::cout << solution.finalValueAfterOperations(operations);

    return 0;
}