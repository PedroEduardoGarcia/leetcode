class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ans: int = 0
        for s in stones:
            for j in jewels:
                if s == j:
                    ans += 1
        
        return ans


if __name__ == "__main__":
    jewels: str = "aA"
    stones: str = "aAAbbbb"

    solution = Solution()

    print(solution.numJewelsInStones(jewels, stones))
    