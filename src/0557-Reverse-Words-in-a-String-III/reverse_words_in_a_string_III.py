class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()

        reversed_words = [word[::-1] for word in words]
        return ' '.join(reversed_words)

    
if __name__ == "__main__":
    s: str =  "Let's take LeetCode contest"
    solution = Solution()
    
    print(solution.reverseWords(s))