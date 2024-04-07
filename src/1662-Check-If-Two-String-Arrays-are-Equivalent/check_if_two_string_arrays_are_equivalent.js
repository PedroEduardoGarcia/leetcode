/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
  let str1 = ""
  let str2 = ""

  for (let w of word1) {
    str1 += w
  }

  for (let w of word2) {
    str2 += w
  }

  return str1 === str2
};

let word1 = ["ab", "c"]
let word2 = ["a", "bc"]

console.log(solution.arrayStringsAreEqual(word1, word2))