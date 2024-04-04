/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function(s) {
  let maxDepth = 0
  let currentDepth = 0
  
  for (let char of s) {
    if (char === '(') {
      currentDepth += 1
      maxDepth = Math.max(maxDepth, currentDepth)
    } else if (char === ')') {
      currentDepth -= 1
    }
  }
  
  return maxDepth
};

const s = "(1+(2*3)+((8)/4))+1"

console.log(maxDepth(s))
