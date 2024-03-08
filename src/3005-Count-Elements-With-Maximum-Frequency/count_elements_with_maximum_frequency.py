from typing import List, Dict

class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        frequencies: Dict[int, list] = {}
        max_frequency: int = 0
        ans: int = 0

        for num in nums:
            if num in frequencies:
                frequencies[num] += 1
            else:
                frequencies[num] = 1
                
            if max_frequency < frequencies[num]:
                    max_frequency = frequencies[num]

        for n, f in frequencies.items():
            if f == max_frequency:
                ans += 1
        
        return ans * max_frequency

if __name__ == "__main__":
    nums: List[int] = [1, 2, 2, 3, 1, 4]
    solution = Solution()
    
    print(solution.maxFrequencyElements(nums))