#include <iostream>
#include <vector>

class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int highest = 0;
        int altitude = 0;

        for (int a : gain) {
            altitude += a;
            if (altitude > highest) {
                highest = altitude;
            }
        }

        return highest;
    }
};

int main() {
    std::vector<int> gain = {-5, 1, 5, 0, -7};
    
    Solution solution;
    
    std::cout << solution.largestAltitude(gain);

    return 0;
}