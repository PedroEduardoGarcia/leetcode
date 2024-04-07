from typing import List

class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        str1: str = ""
        str2: str = ""

        for w in word1:
            str1 += w
        
        for w in word2:
            str2 += w
        
        return str1 == str2

if __name__ == "__main__":
    word1: str = ["ab", "c"]
    word2: str = ["a", "bc"]
    solution = Solution()
    
    print(solution.arrayStringsAreEqual(word1, word2))