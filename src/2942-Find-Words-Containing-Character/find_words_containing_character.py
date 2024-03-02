from typing import List

class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        ans: List[int] = []
        i: int = 0

        for w in words:
            if x in w:
                ans.append(i)
            i += 1

        return ans


if __name__ == "__main__":
    words: List[str] = ["leet","code"]
    x: str = "e"
    solution = Solution()
    
    print(solution.findWordsContaining(words, x))