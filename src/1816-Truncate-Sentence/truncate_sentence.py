class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        words: str = s.split()
        ans: str = ' '.join(words[:k])

        return ans

if __name__ == "__main__":
    s: str = "Hello how are you Contestant"
    k: int = 4
    solution = Solution()

    print(solution.truncateSentence(s, k))