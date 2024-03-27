from typing import List

class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k <= 1:
            return 0
        
        product: int = 1
        ans: int = 0
        left: int = 0

        for right, num in enumerate(nums):
            product *= num

            while product >= k:
                product /= nums[left]
                left += 1
            
            ans += right - left + 1
        
        return ans

if __name__ == "__main__":
    nums: List[int] = [10,5,2,6]
    k: int = 100
    solution = Solution()
    
    print(solution.numSubarrayProductLessThanK(nums, k))