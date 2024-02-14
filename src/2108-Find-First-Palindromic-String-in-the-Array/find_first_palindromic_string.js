/**
 * @param {string[]} words
 * @return {string}
 */
var firstPalindrome = function(words) {
  for (const word of words) {
    if (word === word.split('').reverse().join('')) {
      return word
    }
  }
  return ""
};

words = ["abc","car","ada","racecar","cool"]

console.log(firstPalindrome(words))