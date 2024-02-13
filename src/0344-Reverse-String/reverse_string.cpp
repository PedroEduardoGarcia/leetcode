#include <iostream>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            std::swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    std::vector<char> s = {'h','e','l','l','o'};

    Solution solution;
    solution.reverseString(s);

    for (int i = 0; i < s.size(); i++){
        std::cout << s[i] << " ";
    }
    
    return 0;
}