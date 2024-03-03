class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        if n % 2 == 0:
            return n
        else:
            return n * 2

if __name__ == "__main__":
    n: int = 5

    solution = Solution()

    print(solution.smallestEvenMultiple(n))