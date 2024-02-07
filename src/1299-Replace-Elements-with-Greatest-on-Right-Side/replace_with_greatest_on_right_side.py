from typing import List

class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        arr_len: int = len(arr) - 1
        great_right: int
        
        while arr_len >= 0:
            if arr_len == len(arr) - 1:
                great_right = arr[arr_len]
                arr[arr_len] = -1
            
            else:
                n: int = arr[arr_len]
                arr[arr_len] = great_right

                if great_right < n:
                    great_right = n
            arr_len -= 1
        
        return arr


if __name__ == "__main__":
    arr: List[int] = [17,18,5,4,6,1]
    
    solution = Solution()
    print(solution.replaceElements(arr))
    