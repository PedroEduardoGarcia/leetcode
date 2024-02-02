from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        removing: int = nums[-1]
        k: int = len(nums)
        nums_len: int  = len(nums) - 2

        while nums_len >= 0:
            if nums[nums_len] == removing:
                nums.pop(nums_len)
                k -= 1
            else:
                removing = nums[nums_len]
            nums_len -= 1
        return k

if __name__ == "__main__":
    nums: List[int] = [0,0,1,1,1,2,2,3,3,4]
    
    solution = Solution()
    
    print(f"{solution.removeDuplicates(nums)} {nums}")