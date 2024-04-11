from typing import List

class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack: List[str] = []
        
        for n in num:
            while k > 0 and stack and stack[-1] > n:
                stack.pop()
                k -= 1
            stack.append(n)
        
        while k > 0:
            stack.pop()
            k -= 1
        
        while stack and stack[0] == '0':
            stack.pop(0)
        
        ans: str = ''.join(stack) if stack else '0'
        return ans

    
if __name__ == "__main__":
    num: str = "1432219"
    k: int = 3
    solution = Solution()
    
    print(solution.removeKdigits(num, k))