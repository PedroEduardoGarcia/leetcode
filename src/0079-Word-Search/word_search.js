/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
var exist = function(board, word) {
  if (!board.length) {
    return false
  }

  let rows = board.length
  let cols = board[0].length

  const dfs = (row, col, wordIdx) => {
    if (wordIdx === word.length) {
      return true
    }
    
    if (row < 0 || row >= rows || col < 0 || col >= cols || board[row][col] !== word[wordIdx]) {
      return false
    }
    
    let temp = board[row][col]
    board[row][col] = null
    
    let found = (dfs(row + 1, col, wordIdx + 1) ||
                  dfs(row - 1, col, wordIdx + 1) ||
                  dfs(row, col + 1, wordIdx + 1) ||
                  dfs(row, col - 1, wordIdx + 1))
    
    board[row][col] = temp
    
    return found
  };

  for (let row = 0; row < rows; row++) {
    for (let col = 0; col < cols; col++) {
      if (dfs(row, col, 0)) {
        return true
      }
    }
  }

  return false
};

const board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
const word = "ABCCED"

console.log(exist(board, word))
