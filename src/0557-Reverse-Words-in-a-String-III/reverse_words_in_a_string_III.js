/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
  let words = s.split(' ')
  
  let reversedWords = words.map(word => {
    return word.split('').reverse().join('')
  })

  return reversedWords.join(' ')
};

const s = "Let's take LeetCode contest";

console.log(reverseWords(s))