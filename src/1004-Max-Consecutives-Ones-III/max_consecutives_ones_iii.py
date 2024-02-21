from typing import List

class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        left: int = 0
        right: int = 0
        flips: int = 0
        consecutive: int = 0
        
        while right < len(nums):
            if nums[right] == 0:
                flips += 1
            
            while flips > k:
                if nums[left] == 0:
                    flips -= 1
                left += 1
        
            consecutive = max(consecutive, right - left + 1)
            right += 1
            
        return consecutive


if __name__ == "__main__":
    nums: List[int] = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1]
    k: int = 3
    solution = Solution()
    
    print(solution.longestOnes(nums, k))