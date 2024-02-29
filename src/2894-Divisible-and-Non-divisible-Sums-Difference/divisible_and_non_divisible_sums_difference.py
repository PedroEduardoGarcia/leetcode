class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        num1: int = 0
        num2: int = 0
        i: int = 1

        while i <= n:
            if i % m == 0:
                num2 += i
            else:
                num1 += i
            i += 1

        return num1 - num2

if __name__ == "__main__":
    n: int = 10
    m: int = 3
    solution = Solution()
    
    print(solution.differenceOfSums(n, m))