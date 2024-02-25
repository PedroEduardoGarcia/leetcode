from typing import List

class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
       kelvin: float = celsius + 273.15
       farenheit: float = (celsius * 1.80) + 32.00

       ans: List[float] = [kelvin, farenheit]
       return ans

if __name__ == "__main__":
    celsius: float = 122.11   
    solution = Solution()
    
    print(solution.convertTemperature(celsius))