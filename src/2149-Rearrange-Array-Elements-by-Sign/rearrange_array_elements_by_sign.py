from typing import List

class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        positive: List[int] = []
        negative: List[int] = []
        output: List[int] = []
        
        for n in nums:
            if n >= 0:
                positive.append(n)
            else:
                negative.append(n)
        
        for i in range(len(positive)):
            output.append(positive[i])
            output.append(negative[i])
            
        return output

            
if __name__ == "__main__":
    nums: List[int] = [3,1,-2,-5,2,-4]
    
    solution = Solution()
    
    print(solution.rearrangeArray(nums))