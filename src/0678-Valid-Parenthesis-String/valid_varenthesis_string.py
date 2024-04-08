class Solution:
    def checkValidString(self, s: str) -> bool:
        open_p: int = 0
        closed_p: int = 0

        for c in s:
            if c == "(":
                open_p, closed_p = open_p + 1, closed_p + 1

            elif c == ")":
                open_p, closed_p = open_p - 1, closed_p - 1

            else:
                open_p, closed_p = open_p - 1, closed_p + 1

            if closed_p < 0:
                return False
            
            if open_p < 0:
                open_p = 0

        return open_p == 0
                


if __name__ == "__main__":
    s: str = "(*))"
    solution = Solution()
    
    print(solution.checkValidString(s))