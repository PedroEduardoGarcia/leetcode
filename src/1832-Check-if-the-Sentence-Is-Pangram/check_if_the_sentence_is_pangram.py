from typing import Dict

class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        alpha: str = "abcdefghijklmnopqrstuvwxyz"
        alpha_dict: Dict[str, int] = set(alpha)
        sentence_dict: Dict[str, int] = set(sentence)

        return len(alpha_dict - sentence_dict) == 0
    
if __name__ == "__main__":
    sentence: str = "thequickbrownfoxjumpsoverthelazydog"
    solution = Solution()
    
    print(solution.checkIfPangram(sentence))