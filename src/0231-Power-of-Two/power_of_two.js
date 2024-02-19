/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
  return n > 0 && (n & (n - 1)) == 0
};

n = 16

console.log(isPowerOfTwo(n))