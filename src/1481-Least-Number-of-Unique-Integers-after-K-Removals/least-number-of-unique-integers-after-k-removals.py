from typing import List, Dict

class Solution:
   def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        frequency_map: Dict[int, int] = {}

        for num in arr:
            if num in frequency_map:
                frequency_map[num] += 1
            else:
                frequency_map[num] = 1

        sorted_frequency: Dict[int, int] = sorted(frequency_map.items(), key=lambda x: x[1])
        
        while k > 0:
            key, count = sorted_frequency[0]
            if count > 1:
                sorted_frequency[0] = (key, count - 1)
            else:
                del sorted_frequency[0]
            k -= 1

        
        return len(sorted_frequency)


if __name__ == "__main__":
    arr: List[int] = [4,3,1,1,3,3,2]
    k: int = 3
    solution = Solution()
    
    print(solution.findLeastNumOfUniqueInts(arr, k))