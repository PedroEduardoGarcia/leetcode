from typing import List

class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        if not board:
            return False
        
        rows: int = len(board)
        cols: int = len(board[0])
        
        def dfs(row: int, col: int, word_idx: int) -> bool:
            if word_idx == len(word):
                return True
            
            if row < 0 or row >= rows or col < 0 or col >= cols or board[row][col] != word[word_idx]:
                return False
            
            temp = board[row][col]
            board[row][col] = None
            
            found: bool = (dfs(row + 1, col, word_idx + 1) or
                     dfs(row - 1, col, word_idx + 1) or
                     dfs(row, col + 1, word_idx + 1) or
                     dfs(row, col - 1, word_idx + 1))
            
            board[row][col] = temp
            
            return found
        
        for row in range(rows):
            for col in range(cols):
                if dfs(row, col, 0):
                    return True
                
        return False
    
if __name__ == "__main__":
    board: List[List[str]] = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
    word: str = "ABCCED"
    solution = Solution()
    
    print(solution.exist(board, word))