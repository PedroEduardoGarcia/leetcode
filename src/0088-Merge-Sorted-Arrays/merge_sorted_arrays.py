from typing import List

# O(n + m) solution
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i: int = m - 1
        j: int = n -1
        k: int = m + n - 1
        while i >= 0 and j >= 0:
            if nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1
            
        while j >= 0:
            nums1[k] = nums2[j]
            j -= 1
            k -= 1
        

if __name__ == "__main__":
    nums1: List[int] = [1,2,3,0,0,0]
    m: int = 3
    nums2: List[int] = [2,5,6]
    n: int = 3
    solution = Solution()
    solution.merge(nums1, m, nums2, n)
    print(nums1)