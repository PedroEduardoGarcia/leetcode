from typing import List

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        l: List[str] = [""] * len(indices)
        i: int = 0

        for c in s:
            l[indices[i]] = c
            i += 1
        
        ans: str = "".join(l)
        
        return ans

    
if __name__ == "__main__":
    s: str =  "codeleet"
    indices: List[int] = [4,5,6,7,0,2,1,3]
    solution = Solution()
    
    print(solution.restoreString(s, indices))