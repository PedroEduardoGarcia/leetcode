from typing import List
import heapq

class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        n: int = len(heights)
        ladder_heap: List[int] = []

        for i in range(n - 1):
            cost: int = heights[i + 1] - heights[i]

            if cost > 0:
                if ladders > 0:
                    heapq.heappush(ladder_heap, cost)
                    ladders -= 1
                elif ladder_heap and cost > ladder_heap[0]:
                    bricks -= heapq.heappop(ladder_heap)
                    heapq.heappush(ladder_heap, cost)
                else:
                    bricks -= cost

            if bricks < 0:
                return i

        return n - 1


if __name__ == "__main__":
    arr: List[int] = [4,12,2,7,3,18,20,3,19]
    bricks: int = 10
    ladders: int = 2
    solution = Solution()
    
    print(solution.furthestBuilding(arr, bricks, ladders))