from typing import List

class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        ptr_1: int = 0
        ptr_2: int = 0

        while ptr_1 < len(nums1) and ptr_2 < len(nums2):
            if nums1[ptr_1] == nums2[ptr_2]:
                return nums1[ptr_1]
            if nums1[ptr_1] > nums2[ptr_2]:
                ptr_2 += 1
            else:
                ptr_1 += 1
        
        return -1

if __name__ == "__main__":
    nums1: List[int] = [1,2]
    nums2: List[int] = [3,4]
    solution = Solution()

    print(solution.getCommon(nums1, nums2))