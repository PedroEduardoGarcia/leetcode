/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function(n, m) {
  let num1 = 0
  let num2 = 0
  let i = 1

  while (i <= n) {
    if (i % m === 0) {
      num2 += i
    }
    else {
      num1 += i
    }
    i += 1
  }

  return num1 - num2
};

let n = 10
let m = 3

console.log(differenceOfSums(n, m))
