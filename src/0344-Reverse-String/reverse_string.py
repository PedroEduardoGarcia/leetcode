from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        left: int = 0
        right: int = len(s) - 1

        while left < right:
            s[left] , s[right] = s[right], s[left]
            left += 1
            right -= 1

if __name__ == "__main__":
    s: List[str] = ["h","e","l","l","o"]
    
    solution = Solution()
    solution.reverseString(s)
    print(s)
    