/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
  let ans = 0

  for (const s of sentences) {
    let temp = 0
    for (const w of s) {
      if (w === ' '){
        temp += 1
      }
    }
    if (temp > ans) {
      ans = temp
    }
  }

  return ans + 1
};

let sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]

console.log(mostWordsFound(sentences))