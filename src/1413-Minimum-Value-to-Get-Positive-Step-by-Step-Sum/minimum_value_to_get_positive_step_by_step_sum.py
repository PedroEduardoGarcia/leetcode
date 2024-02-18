from typing import List

class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        min_start: int = 0
        curr_sum: int = 0
        for n in nums:
            curr_sum += n
            min_start = max(min_start, 1 - curr_sum)

        return min_start if min_start > 0 else 1

if __name__ == "__main__":
    nums: List[int] = [-3,2,-3,4,2]
    
    solution = Solution()

    print(solution.minStartValue(nums))
    