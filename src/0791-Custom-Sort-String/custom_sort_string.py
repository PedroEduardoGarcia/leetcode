from typing import Dict

class Solution:
    def customSortString(self, order: str, s: str) -> str:
        occ: Dict[str, int] = {}
        ans: str = ""

        for c in order:
            occ[c] = 0

        for c in s:
            if c in occ:
                occ[c] += 1

        for c, i in occ.items():
            ans += c * i
        
        for c in s:
            if c not in order:
                ans += c
        
        return ans


if __name__ == "__main__":
    order: str = "hucw"
    s: str = "utzoampdgkalexslxoqfkdjoczajxtuhqyxvlfatmptqdsochtdzgypsfkgqwbgqbcamdqnqztaqhqanirikahtmalzqjjxtqfnh"
    solution = Solution()

    print(solution.customSortString(order, s))