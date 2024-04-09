from typing import List

class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        time_taken: int = 0

        for i in range(len(tickets)):
            if i <= k:
                time_taken += min(tickets[i], tickets[k])
            else:
                time_taken += min(tickets[i], tickets[k] - 1)
        
        return time_taken
            
    
if __name__ == "__main__":
    tickets = [2,3,2]
    k = 2
    solution = Solution()
    
    print(solution.timeRequiredToBuy(tickets, k))