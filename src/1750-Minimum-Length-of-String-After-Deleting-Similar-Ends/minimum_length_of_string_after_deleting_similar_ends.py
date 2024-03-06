class Solution:
    def minimumLength(self, s: str) -> int:
        left: int = 0
        right: int = len(s) - 1

        if len(s) == 1:
            return 1
        
        while left < right and s[left] == s[right]:
            c: str = s[left]
            while left <= right and s[left] == c:
                left += 1
            while right >= left and s[right] == c:
                right -= 1
        
        ans: int = right - left + 1
        return ans
            

if __name__ == "__main__":
    s: str = "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb"
    solution = Solution()

    print(solution.minimumLength(s))