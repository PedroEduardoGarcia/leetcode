from typing import List, Dict

class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        left: int = 0
        right: int = 0
        ans: int = 0
        frequency: Dict[int, int] = {}
        n: int = len(nums)

        for right in range(n):
            if nums[right] not in frequency:
                frequency[nums[right]] = 0  
            frequency[nums[right]] += 1
            while frequency[nums[right]] > k:
                frequency[nums[left]] -= 1
                left += 1
            
            ans = max(ans, right - left + 1)
        
        return ans


if __name__ == "__main__":
    nums: List[int] = [1,2,3,1,2,3,1,2]
    k: int = 2
    solution = Solution()
    
    print(solution.maxSubarrayLength(nums, k))