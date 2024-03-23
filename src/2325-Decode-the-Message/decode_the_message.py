from typing import Dict

class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        sub_table: Dict[str] = {}
        key_index: int = 0

        for c in key:
            if c != ' ' and c not in sub_table:
                sub_table[c] = chr(ord('a') + key_index)
                key_index += 1
                if key_index == 26:
                    break
        
        ans: str = ''
        for c in message:
            if c == ' ':
                ans += ' '
            elif c in sub_table:
                ans += sub_table[c]
        
        return ans


if __name__ == "__main__":
    key: str = "the quick brown fox jumps over the lazy dog"
    message: str = "vkbs bs t suepuv"
    solution = Solution()
    
    print(solution.decodeMessage(key, message))