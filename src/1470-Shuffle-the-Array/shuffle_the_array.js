/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
  let ans = []

  for (let i = 0; i < n; i++) {
    ans.push(nums[i])
    ans.push(nums[i + n])
  }

  return ans
};

nums = [2,5,1,3,4,7]
n = 3

console.log(shuffle(nums, n))