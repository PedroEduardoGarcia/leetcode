from typing import List

class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        n: int = len(deck)
        deck.sort()
        q: List[int] = list(range(n))

        
        ans: List[int] = [0] * n

        for i in range(n):
            ans[q.pop(0)] = deck[i]
            if q:
                q.append(q.pop(0))
        
        return ans

    
if __name__ == "__main__":
    deck: List[int] = [17,13,11,2,3,5,7]
    solution = Solution()
    
    print(solution.deckRevealedIncreasing(deck))