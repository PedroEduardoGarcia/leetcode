from typing import List

class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums.append(0)
        i: int = 0
        n: int = len(nums)

        for j in range(n):
            if nums[j] < 0 or nums[j] >= n:
                nums[j] = n
        while i < n:
            j = nums[i]

            if nums[i] < n and nums[i] != nums[j]:
                nums[i], nums[j] = nums[j], nums[i]
            else: 
                i += 1

        for i in range(n):
            if nums[i] != i:
                return i
        
        return n

if __name__ == "__main__":
    nums: List[int] = [3,4,-1,1]
    solution = Solution()
    
    print(solution.firstMissingPositive(nums))