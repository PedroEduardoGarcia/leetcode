from typing import List

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        output: List[str] = []
        for i in range(1, n+1):
            if i % 3 == 0:
                if i % 5 == 0:
                    output.append("FizzBuzz")
                else:
                    output.append("Fizz")
            elif i % 5 == 0:
                output.append("Buzz")
            else:
                output.append(f"{i}")
        return output
    
if __name__ == "__main__":
    n: int = 15
    solution = Solution()
    print(solution.fizzBuzz(n))
