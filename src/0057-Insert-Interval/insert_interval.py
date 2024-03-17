from typing import List

class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        left: List[int] = []
        right: List[int] = []
        
        for interv in intervals:
            if interv[1] < newInterval[0]:
                left.append(interv)
            elif interv[0] > newInterval[1]:
                right.append(interv)
            else:
                newInterval = (min(interv[0], newInterval[0]), max(interv[1], newInterval[1]))
        
        return left + [newInterval] + right

if __name__ == "__main__":
    intervals: List[List[int]] = [[1,3], [6,9]]
    new_interval: List[int] = [2,5]
    solution = Solution()

    print(solution.insert(intervals, new_interval))