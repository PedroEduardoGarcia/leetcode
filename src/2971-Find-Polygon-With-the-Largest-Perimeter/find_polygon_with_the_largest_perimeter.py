from typing import List

class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        total_sum: int = sum(nums)
        output: int  = 0

        for i in range(len(nums)):
            if output == 0:
                if total_sum - (2 * nums[i]) > 0:
                    output += nums[i]
                else:
                    total_sum -= nums[i]
            else:
                output += nums[i]
            
        
        return output if output > 0 else -1



if __name__ == "__main__":
    nums: List[int] = [1,12,1,2,5,50,3]
    
    solution = Solution()
    
    print(solution.largestPerimeter(nums))