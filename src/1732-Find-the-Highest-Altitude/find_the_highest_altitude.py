from typing import List

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        highest: int = 0
        altitude: int = 0

        for a in gain:
            altitude += a
            if altitude > highest:
                highest = altitude

        return highest

if __name__ == "__main__":
    gain: List[int] = [-5,1,5,0,-7]
   
    solution = Solution()
    
    print(solution.largestAltitude(gain))