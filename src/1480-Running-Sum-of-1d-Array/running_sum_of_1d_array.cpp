#include <iostream>
#include <vector>
// Definition for a binary tree node.
class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> output;
        for(int i = 0; i< nums.size(); i++){
            if(i == 0){
                output.push_back(nums[i]);
            }
            else{
                output.push_back(nums[i] + output[i - 1]);
            }
        }
      return output;
    }
};
      
int main() {
  std::vector<int> nums {1,2,3,4};
  Solution solution;
  std::vector<int> result = solution.runningSum(nums);
  
  for (int i : result) {
    std::cout << i << " ";
  }
  
  return 0;
}