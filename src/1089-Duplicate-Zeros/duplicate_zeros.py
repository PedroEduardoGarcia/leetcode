from typing import List

class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        i:int = 0
        while i < len(arr):
            if arr[i] == 0:
                arr.insert(i, 0)
                i += 1 
                arr.pop()
            i += 1
       

 
if __name__ == "__main__":
    arr: List[int] = [1,0,2,3,0,4,5,0]
    solution = Solution()
    solution.duplicateZeros(arr)
    print(arr)