from typing import List

class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        in_degree: List[int] = [0] * n
        out_degree: List[int] = [0] * n
        ans: List[int] = []

        for t in trust:
            out_degree[t[0] - 1] += 1
            in_degree[t[1] - 1] += 1

        for i in range(len(in_degree)):
            if in_degree[i] == n - 1:
                if out_degree[i] == 0:
                    ans.append(i + 1)
        
        return ans[0] if len(ans) == 1 else -1
     

if __name__ == "__main__":
    n: int = 3
    trust: List[List[int]] = [[1,3],[2,3],[3,1]]
        
    solution = Solution()
    
    print(solution.findJudge(n, trust))