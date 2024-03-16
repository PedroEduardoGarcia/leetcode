class Solution:
    def numberOfMatches(self, n: int) -> int:
        ans: int = 0

        while n > 1:
            if n % 2 == 0:
                n = n // 2 
                ans += n
            else:
                n = ((n - 1) // 2) + 1
                ans += n - 1
        
        return ans

if __name__ == "__main__":
    n: int = 7
    solution = Solution()

    print(solution.numberOfMatches(n))