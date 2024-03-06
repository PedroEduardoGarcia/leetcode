/**
 * @param {string} s
 * @return {number}
 */
var minimumLength = function(s) {
  let left = 0
  let right = s.length - 1

  if (s.length == 1) return 1

  while (left < right && s[left] == s[right]) {
    let c = s[left]

    while (left <= right && s[left] == c) {
      left += 1
    }
    while (right >= left && s[right] == c) {
      right -= 1
    }
  }

  let ans = right - left + 1
  return ans
};

let s = "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb"

console.log(minimumLength(s))