from typing import List

class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        value: int = arr[0]
        arr_len: int = len(arr)
        i: int = 1
        peak: bool = False

        if arr_len < 3:
            return False
        
        while i < arr_len:
            if value == arr[i]:
                return False
            
            if not peak:
                if value > arr[i]:
                    if i == 1:
                        return False
                    else:
                        peak = True
                        value = arr[i]
                else:
                    value = arr[i]
            elif peak:
                if value < arr[i]:
                    return False
                else:
                    value = arr[i]
            i += 1
        
        return True if peak else False


if __name__ == "__main__":
    arr: List[int] = [3,7,20,14,15,14,10,8,2,1]
    solution = Solution()
    
    print(solution.validMountainArray(arr))