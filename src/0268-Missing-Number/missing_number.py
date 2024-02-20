from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums_len: int = len(nums)
        total_sum: int = 0
        missing: int = 0
        
        for i in range(nums_len):
            total_sum += i
            missing += nums[i]

        return total_sum - missing + nums_len


if __name__ == "__main__":
    nums: List[int] = [9,6,4,2,3,5,7,0,1]
        
    solution = Solution()
    
    print(solution.missingNumber(nums))