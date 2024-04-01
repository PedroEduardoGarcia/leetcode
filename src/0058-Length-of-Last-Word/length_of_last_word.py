from typing import List

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s: str = s.strip()
        words: List[str] = s.split()
        ans: int = len(words[-1])
        
        return ans
    
if __name__ == "__main__":
    s: str = "   fly me   to   the moon  "
    solution = Solution()
    
    print(solution.lengthOfLastWord(s))