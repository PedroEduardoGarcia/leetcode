from typing import List

class Solution:
    def makeGood(self, s: str) -> str:
        stack: List[str] = []
        
        for c in s:
            if not stack:
                stack.append(c)
            
            elif abs(ord(stack[-1]) - ord(c)) == 32:
                stack.pop()
            
            else:
                stack.append(c)

        ans: str = ''.join(stack)

        return ans
    
if __name__ == "__main__":
    s: str = "leEeetcode"
    solution = Solution()
    
    print(solution.makeGood(s))