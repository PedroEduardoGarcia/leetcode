class Solution:
    def countDigits(self, num: int) -> int:
        s: str = str(num)
        ans: int = 0
        
        for n in s:
            
            if num  % int(n) == 0:
                ans += 1

        return ans
    
if __name__ == "__main__":
    num = 121
    solution = Solution()
    
    print(solution.countDigits(num))