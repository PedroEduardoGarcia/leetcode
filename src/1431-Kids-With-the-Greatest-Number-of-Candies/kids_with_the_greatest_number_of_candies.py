from typing import List

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        ans: List[bool] = []
        h: int = max(candies)
        
        for i in range(len(candies)):
            if candies[i] + extraCandies >= h:
                ans.append(True)
            else:
                ans.append(False)

        return ans
    
if __name__ == "__main__":
    candies: List[int] = [2,3,5,1,3]
    extra_candies: int = 3

    solution = Solution()

    print(solution.kidsWithCandies(candies, extra_candies))