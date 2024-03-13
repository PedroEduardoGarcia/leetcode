/**
 * @param {number} n
 * @return {number}
 */
var pivotInteger = function(n) {
  let total_sum = (n * (n + 1)) / 2
  let left_sum = 0

  for (let i = 1; i <= n; i++) {
    left_sum += i
    let right_sum = total_sum - left_sum + i
    if (left_sum === right_sum) {
      return i
    }
  }

  return -1
};

let n = 8

console.log(pivotInteger(n))