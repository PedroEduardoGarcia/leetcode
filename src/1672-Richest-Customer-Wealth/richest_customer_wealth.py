from typing import List

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_wealth: int = 0
        for customer in accounts:
            customer_wealth: int = 0
            for bank in customer:
                customer_wealth += bank
            max_wealth = max(max_wealth, customer_wealth)
        return max_wealth


if __name__ == "__main__":
    accounts : List[List[int]] = [[1,2,3],[3,2,1]]
    solution = Solution()
    print(solution.maximumWealth(accounts ))