from typing import List

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        even_digits_count: int = 0
        
        for i in range(len(nums)):
            count: int = 0
            while (nums[i] >= 1):
                nums[i] = nums[i] / 10
                count += 1
            if count % 2 == 0:
                even_digits_count += 1
        
        return even_digits_count


if __name__ == "__main__":
    nums: List[int] = [12,345,2,6,7896]
    solution = Solution()

    print(solution.findNumbers(nums))