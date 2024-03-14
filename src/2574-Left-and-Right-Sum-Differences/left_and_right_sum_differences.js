/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
  let left = 0
  let right = 0
  let ans = []

  for (n of nums) {
    right += n
  }

  for (n of nums) {
    right -= n
    ans.push(Math.abs(right - left))
    left += n
  }

  return ans
};

let nums = [10,4,8,3]

console.log(leftRightDifference(nums))