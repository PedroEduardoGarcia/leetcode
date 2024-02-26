from typing import List

class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x: int = 0
        for s in operations:
            if '+' in s:
                x += 1
            else:
                x -= 1
        return x

if __name__ == "__main__":
    operations: str = ["--X","X++","X++"]
    solution = Solution()
    
    print(solution.finalValueAfterOperations(operations))