from typing import List

class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        ans: int = 0

        for s in sentences:
            temp: int = 0
            for w in s:
                if w == ' ':
                    temp += 1
            if temp > ans:
                ans = temp
        
        return ans + 1


if __name__ == "__main__":
    sentences: List[str] = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
    solution = Solution()

    print(solution.mostWordsFound(sentences))