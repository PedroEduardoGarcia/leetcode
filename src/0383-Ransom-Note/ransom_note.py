from typing import Dict

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        char_map: Dict = {}

        for char in magazine:
            char_map[char] = char_map.get(char, 0) + 1

        for char in ransomNote:
            if char not in char_map or char_map[char] == 0:
                return False
            char_map[char] -= 1

        return True
 
if __name__ == "__main__":
    magazine: str = "ab"
    ransomNote: str = "aa"
    solution = Solution()

    print(solution.canConstruct(ransomNote, magazine))