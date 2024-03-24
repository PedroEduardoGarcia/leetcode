from typing import List, Set

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums_set: Set[int] = set()
        for num in nums:
            if num in nums_set:
                return num
            
            nums_set.add(num)

if __name__ == "__main__":
    nums: List[int] = [1,3,4,2,2]
    solution = Solution()
    
    print(solution.findDuplicate(nums))