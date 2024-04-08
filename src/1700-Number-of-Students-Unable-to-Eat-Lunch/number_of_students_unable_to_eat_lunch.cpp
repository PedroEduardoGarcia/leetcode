#include <iostream>
#include <vector>

class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int check = 0;
        
        while (true) {
            if (sandwiches[0] == students[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                check = 0;
            } else {
                int temp = students[0];
                students.erase(students.begin());
                students.push_back(temp);
                check++;
            }

            if (sandwiches.empty()) {
                break;
            } else if (check == sandwiches.size()) {
                break;
            }
        }
        return students.size();
    }
};

int main() {
    std::vector<int> students = {1, 1, 0, 0};
    std::vector<int> sandwiches = {0, 1, 0, 1};
    Solution solution;

    std::cout << solution.countStudents(students, sandwiches);
    return 0;
}