from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)):
            nums[i] *= nums[i]
        nums.sort()
        return nums
 
if __name__ == "__main__":
    nums: List[int] = [-4,-1,0,3,10]
    solution = Solution()

    print(solution.sortedSquares(nums))