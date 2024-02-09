from typing import List

class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        even_index: int = 0

        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                nums[i], nums[even_index] = nums[even_index], nums[i]
                even_index += 1
        return nums

if __name__ == "__main__":
    nums: List[int] = [3,1,2,4]
    
    solution = Solution()
    
    print(solution.sortArrayByParity(nums))