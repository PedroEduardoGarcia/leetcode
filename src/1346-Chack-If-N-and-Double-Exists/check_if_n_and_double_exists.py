from typing import List

class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        seen = set()
        for num in arr:
            if num * 2 in seen or (num % 2 == 0 and num // 2 in seen):
                return True
            seen.add(num)
        return False

if __name__ == "__main__":
    arr: List[int] = [10,2,5,3]
    
    solution = Solution()
    print(solution.checkIfExist(arr))
    