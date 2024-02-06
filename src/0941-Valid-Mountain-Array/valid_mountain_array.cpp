#include <iostream>
#include <vector>

class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        int value = arr[0];
        int arr_len = arr.size();
        int i = 1;
        bool peak = false;

        if (arr_len < 3) return false;

        while (i < arr_len) {
            if (value == arr[i]) return false;
            
            if (! peak) {
                if (value > arr[i]){
                    if (i == 1) return false;
                    else {
                        peak = true;
                        value = arr[i];
                    }
                }
                else value = arr[i];
            }
            else if (peak) {
                if (value <= arr[i]) return false;
                else value = arr[i];
            }
            i++;
        }
        if (peak) return true;
        else return false;
    }
};


int main() {
    std::vector<int> arr = {3,7,20,14,15,14,10,8,2,1};
    
    Solution solution;

    std::cout << std::boolalpha << solution.validMountainArray(arr) << std::endl; 
    
    return 0;
}