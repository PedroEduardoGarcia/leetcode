from typing import List

class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        left: int = 0
        right: int = 0
        ans: List[int] = []

        for n in nums:
            right += n

        for n in nums:
            right -= n
            ans.append(abs(left - right))
            left += n
            
        return ans

if __name__ == "__main__":
    nums: List[int] = [10,4,8,3]
    solution = Solution()

    print(solution.leftRightDifference(nums))