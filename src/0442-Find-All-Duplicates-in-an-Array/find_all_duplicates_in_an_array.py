from typing import List

class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans: List[int] = []

        for i in range(len(nums)):
            pos: int = abs(nums[i]) - 1

            if nums[pos] < 0:
                ans.append(pos + 1)
                
            nums[pos] = -nums[pos]

        return ans

if __name__ == "__main__":
    nums: List[int] = [4,3,2,7,8,2,3,1]
    solution = Solution()
    
    print(solution.findDuplicates(nums))