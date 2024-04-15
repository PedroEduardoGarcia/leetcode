from typing import List

class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        ans: int = 0

        if ruleKey == "type":
            index: int = 0
        elif ruleKey == "color":
            index: int = 1
        elif ruleKey == "name":
            index: int = 2

        for item in items:
            if item[index] == ruleValue:
                ans += 1

        return ans     


if __name__ == "__main__":
    items: List[List[str]] = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]
    ruleKey: str = "color"
    ruleValue: str = "silver"
    solution = Solution()
    
    print(solution.countMatches(items, ruleKey, ruleValue))