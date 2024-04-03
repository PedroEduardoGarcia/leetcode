from typing import Dict

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        s_to_t: Dict[str, str] = {}
        t_to_s: Dict[str, str] = {}
        
        for char_s, char_t in zip(s, t):
            if char_s in s_to_t:
                if s_to_t[char_s] != char_t:
                    return False
            else:
                s_to_t[char_s] = char_t
            
            if char_t in t_to_s:
                if t_to_s[char_t] != char_s:
                    return False
            else:
                t_to_s[char_t] = char_s
        
        return True
    
if __name__ == "__main__":
    s: str = "egg"
    t: str = "add"
    solution = Solution()
    
    print(solution.isIsomorphic(s, t))