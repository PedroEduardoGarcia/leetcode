#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double farenheit = (celsius * 1.80) + 32.00;

        std::vector<double> ans = {kelvin, farenheit};
        return ans;
    }
};

int main() {
    double celsius = 122.11;

    Solution solution;

    std::vector<double> output = solution.convertTemperature(celsius);
    
    for (auto it : output) {
        std::cout << it << " ";
    }
    return 0;
}