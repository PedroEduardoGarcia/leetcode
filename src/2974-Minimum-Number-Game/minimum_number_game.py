from typing import List

class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        arr: List[int] = []
        nums.sort()
        i: int = 0

        while i < len(nums):
            arr.append(nums[i+1])
            arr.append(nums[i])
            i += 2

        return arr

if __name__ == "__main__":
    nums: List[int] = [5,4,2,3]
    solution = Solution()

    print(solution.numberGame(nums))