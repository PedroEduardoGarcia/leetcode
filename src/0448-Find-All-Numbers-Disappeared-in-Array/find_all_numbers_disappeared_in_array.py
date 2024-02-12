from typing import List

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        result: List[int] = []

        for num in nums:
            index: int = abs(num) - 1
            nums[index] = -abs(nums[index])
        
        for i, num in enumerate(nums):
            if num > 0:
                result.append(i + 1)
        
        return result

if __name__ == "__main__":
    nums: List[int] = [4,3,2,7,8,2,3,1]
    
    solution = Solution()
    
    print(solution.findDisappearedNumbers(nums))