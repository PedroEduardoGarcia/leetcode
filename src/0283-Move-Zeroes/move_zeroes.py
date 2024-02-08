from typing import List

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        non_zero_index: int = 0

        for i in range(len(nums)):
            if nums[i] != 0:
                nums[i], nums[non_zero_index] = nums[non_zero_index], nums[i]
                non_zero_index += 1


if __name__ == "__main__":
    nums: List[int] = [0,1,0,3,12]
    solution = Solution()
    solution.moveZeroes(nums)
    print(nums)