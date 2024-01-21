from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        output = []
        for i in range(len(nums)):
            if i == 0:
                output.append(nums[i])
            else:
                output.append(nums[i] + output[i-1])

        return output

if __name__ == "__main__":
    nums: List[int] = [1,2,3,4]
    solution = Solution()
    print(solution.runningSum(nums))