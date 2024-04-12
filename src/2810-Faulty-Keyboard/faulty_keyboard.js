/**
 * @param {string} s
 * @return {string}
 */
var finalString = function(s) {
  let ans = ""

  for (let c of s) {
    if (c === 'i') {
      ans = ans.split('').reverse().join('')
    } else {
      ans += c
    }
  }

  return ans
};

const s = "string"

console.log(finalString(s))
