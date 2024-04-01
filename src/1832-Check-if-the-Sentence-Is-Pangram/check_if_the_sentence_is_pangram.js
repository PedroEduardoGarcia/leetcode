/**
 * @param {string} sentence
 * @return {boolean}
 */
class Solution {
  checkIfPangram(sentence) {
    let alpha = new Set("abcdefghijklmnopqrstuvwxyz")
    let sentenceSet = new Set(sentence)

    for (let letter of alpha) {
      if (!sentenceSet.has(letter))
        return false
    }
    
    return true
  }
}

let sentence = "thequickbrownfoxjumpsoverthelazydog"
let solution = new Solution()

console.log(solution.checkIfPangram(sentence));
