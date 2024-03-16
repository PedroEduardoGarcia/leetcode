/**
 * @param {number} n
 * @return {number}
 */
var numberOfMatches = function(n) {
  let ans = 0

  while (n > 1) {
    if (n % 2 === 0) {
      n = n / 2 
      ans += n
    }
    else {
      n = ((n - 1) / 2) + 1
      ans += n - 1
    }
  }

  return ans
};

let n = 7

console.log(numberOfMatches(n))