from typing import List

class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        ans: int = 0

        for _ in range(len(hours)):
            if hours[_] >= target:
                ans += 1
        
        return ans

if __name__ == "__main__":
    hours: List[int] = [0,1,2,3,4]
    target: int = 2

    solution = Solution()
    
    print(solution.numberOfEmployeesWhoMetTarget(hours, target))