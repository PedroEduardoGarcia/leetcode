from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k: int = 0
        nums_len: int = len(nums) - 1
        while nums_len >= 0:
            if nums[nums_len] == val:
                nums.pop(nums_len)
            else:
                k +=1
            nums_len -= 1
        return k
        

if __name__ == "__main__":
    nums: List[int] = [3,2,2,3]
    val: int = 3
    solution = Solution()
    
    print(solution.removeElement(nums,val))