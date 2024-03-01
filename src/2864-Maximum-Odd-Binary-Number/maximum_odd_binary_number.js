/**
 * @param {string} s
 * @return {string}
 */
var maximumOddBinaryNumber = function(s) {
  let ones = s.split('1').length - 1
  let ans = ''

  for (let i = 0; i < s.length - 1; i++) {
    if (ones > 1) {
      ans += '1'
      ones -= 1
    } 
    else {
      ans += '0'
    }
  }

  ans += '1'

  return ans
};

s = "0101"

console.log(maximumOddBinaryNumber(s))