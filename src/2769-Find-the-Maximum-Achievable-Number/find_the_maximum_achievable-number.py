class Solution:
    def theMaximumAchievableX(self, num: int, t: int) -> int:
        x: int = 0

        num += t
        x = num + t
        return x

if __name__ == "__main__":
    num: int = 3
    t: int = 7      
    solution = Solution()
    
    print(solution.theMaximumAchievableX(num, t))