class Solution:
    def finalString(self, s: str) -> str:
        ans: str = ""

        for c in s:
            if c == 'i':
                ans = ans[::-1]
            else:
                ans += c
        
        return ans
    
if __name__ == "__main__":
    s: str =  "string"
    solution = Solution()
    
    print(solution.finalString(s))