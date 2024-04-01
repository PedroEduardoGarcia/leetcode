/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
  s = s.trim()
        
  let words = s.split(" ")

  if (words.length === 0) return 0
  
  return words[words.length - 1].length
};

let s = "   fly me   to   the moon  "
let solution = new Solution()

console.log(solution.lengthOfLastWord(s));
