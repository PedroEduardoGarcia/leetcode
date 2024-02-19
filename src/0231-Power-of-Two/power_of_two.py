class Solution(object):
    def isPowerOfTwo(self, n: int) -> bool:
       return n > 0 and (n & (n - 1)) == 0

if __name__ == "__main__":
    n: int = 16
        
    solution = Solution()
    
    print(solution.isPowerOfTwo(n))