from typing import List

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        consecutive_ones: int = 0
        max_consecutive_ones: int = 0
        
        for i in range(len(nums)):
            if nums[i] == 1:
                consecutive_ones += 1
                if consecutive_ones > max_consecutive_ones:
                    max_consecutive_ones = consecutive_ones
            else:
                consecutive_ones = 0
        return max_consecutive_ones
 
if __name__ == "__main__":
    nums: List[int] = [1,1,0,1,1,1]
    solution = Solution()

    print(solution.findMaxConsecutiveOnes(nums))