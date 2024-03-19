/**
 * @param {number} n
 * @param {number} start
 * @return {number}
 */
var xorOperation = function(n, start) {
  let nums = []

  for (let i = 0; i < n; ++i) {
    nums.push(start + 2 * i)
  }
  
  let ans = nums[0]

  for (let i = 1; i < nums.length; ++i) {
    ans ^= nums[i]
  }
  
  return ans
};

let n = 4
let start = 3

console.log(xorOperation(n, start))