#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int open_p = 0;
        int closed_p = 0;

        for (char c : s) {
            if (c == '(') {
                open_p += 1;
                closed_p += 1;
            } else if (c == ')') {
                open_p -=1;
                closed_p -=1;
            } else {
                open_p -=1;
                closed_p += 1;
            }

            if (closed_p < 0)
                return false;

            if (open_p < 0)
                open_p = 0;
        }

        return open_p == 0;
    }
};

int main() {
    string s = "(*))";
    Solution solution;
    
    cout << boolalpha << solution.checkValidString(s) << endl;

    return 0;
}
