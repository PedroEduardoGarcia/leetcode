class Solution:
    def sumOfMultiples(self, n: int) -> int:
        ans: int = 0

        for i in range(1, n + 1):
            if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
                print(i)
                ans += i

        return ans

if __name__ == "__main__":
    n: int = 7
    
    solution = Solution()

    print(solution.sumOfMultiples(n))