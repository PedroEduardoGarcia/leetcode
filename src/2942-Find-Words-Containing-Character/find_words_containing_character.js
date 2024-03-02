/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
  let ans = []
  let i = 0

  for (let w of words) {
    if (w.includes(x)) {
      ans.push(i)
    } 
    i += 1
  }

  return ans
};

words = ["leet","code"]
x = 'e'

console.log(findWordsContaining(words, x))