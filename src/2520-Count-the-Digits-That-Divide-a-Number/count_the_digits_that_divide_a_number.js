/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function(num) {
  let s = num.toString()
  let ans = 0

  for (let i = 0; i < s.length; i++) {
    let n = parseInt(s[i])

    if (num % n === 0) {
      ans += 1
    }
  }

  return ans
};

let num = 121

console.log(countDigits(num))