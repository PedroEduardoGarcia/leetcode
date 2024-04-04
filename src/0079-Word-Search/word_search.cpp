#include <iostream>
#include <vector>
#include <string>
#include <functional>

class Solution {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        if (board.empty()) {
            return false;
        }
        
        int rows = board.size();
        int cols = board[0].size();
        
        std::function<bool(int, int, int)> dfs = [&](int row, int col, int wordIdx) -> bool {
            if (wordIdx == word.length()) {
                return true;
            }
            
            if (row < 0 || row >= rows || col < 0 || col >= cols || board[row][col] != word[wordIdx]) {
                return false;
            }
            
            char temp = board[row][col];
            board[row][col] = '\0';
            
            bool found = (dfs(row + 1, col, wordIdx + 1) ||
                          dfs(row - 1, col, wordIdx + 1) ||
                          dfs(row, col + 1, wordIdx + 1) ||
                          dfs(row, col - 1, wordIdx + 1));
            
            board[row][col] = temp;
            
            return found;
        };
        
        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                if (dfs(row, col, 0)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

int main() {
    std::vector<std::vector<char>> board = {{'A','B','C','E'}, {'S','F','C','S'}, {'A','D','E','E'}};
    std::string word = "ABCCED";
    
    Solution solution;
    
    std::cout << std::boolalpha << solution.exist(board, word) << std::endl;
    
    return 0;
}