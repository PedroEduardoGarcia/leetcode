from typing import List, Set

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1: Set[int] = set(nums1)
        set2: Set[int] = set(nums2)

        ans: List[int] = list(set1 & set2)
        
        return ans

if __name__ == "__main__":
    nums1: List[int] = [1,2,2,1]
    nums2: List[int] = [2,2]
    solution = Solution()

    print(solution.intersection(nums1, nums2))