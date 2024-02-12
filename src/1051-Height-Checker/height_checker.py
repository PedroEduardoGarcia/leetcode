from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected: List[int] = sorted(heights) 
        count: int = sum(h != i for h, i in zip(heights, expected))
        return count

if __name__ == "__main__":
    heights: List[int] = [1,1,4,2,1,3]
    
    solution = Solution()
    print(solution.heightChecker(heights))
    