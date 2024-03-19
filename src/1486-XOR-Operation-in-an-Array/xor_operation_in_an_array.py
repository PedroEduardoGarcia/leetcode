from typing import List

class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums: List[int] = []

        for i in range(n):
            nums.append(start + 2 * i)
        
        ans: int = nums[0]

        for num in nums[1:]:
            ans ^= num
        
        return ans

if __name__ == "__main__":
    n: int = 4
    start: int = 3
    solution = Solution()

    print(solution.xorOperation(n, start))