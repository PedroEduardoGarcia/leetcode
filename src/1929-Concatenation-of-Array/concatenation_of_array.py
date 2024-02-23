from typing import List

class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans: List[int] = nums * 2

        return ans

if __name__ == "__main__":
    nums: List[int] = [1,2,1]
        
    solution = Solution()
    
    print(solution.getConcatenation(nums))