class Solution:
    def maxDepth(self, s: str) -> int:
        max_depth: int = 0
        current_depth : int = 0
        
        for char in s:
            if char == '(':
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                current_depth -= 1
                
        return max_depth
    
if __name__ == "__main__":
    s: str = "(1+(2*3)+((8)/4))+1"
    solution = Solution()
    
    print(solution.maxDepth(s))