from typing import List

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ans: List[int] = []

        for i in range(n):
            ans.append(nums[i])
            ans.append(nums[i + n])

        return ans



if __name__ == "__main__":
    nums:  List[int] = [2,5,1,3,4,7]
    n: int = 3

    solution = Solution()

    print(solution.shuffle(nums, n))
    