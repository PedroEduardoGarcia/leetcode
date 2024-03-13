class Solution:
    def pivotInteger(self, n: int) -> int:
        total_sum: int = (n * (n + 1)) // 2
        left_sum: int = 0 

        for i in range(1, n + 1):
            left_sum += i
            right_sum: int = total_sum - left_sum + i
            if left_sum == right_sum:
                return i
        
        return -1

if __name__ == "__main__":
    n: int = 8
    solution = Solution()

    print(solution.pivotInteger(n))