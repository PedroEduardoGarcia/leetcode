class Solution:
    def toLowerCase(self, s: str) -> str:
        ans: str = s.lower()
        return ans

if __name__ == "__main__":
    s: str = "LOVELY"
    solution = Solution()
    
    print(solution.toLowerCase(s))