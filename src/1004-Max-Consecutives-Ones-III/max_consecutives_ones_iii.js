/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
  let left = 0
  let right = 0
  let flips = 0
  let consecutive = 0

  while (right < nums.length) {
    if (nums[right] === 0) {
      flips++
    }
    
    while (flips > k) {
      if (nums[left] === 0) {
        flips--
      }
      left++
    }

    consecutive = Math.max(consecutive, right - left + 1)
    right++
  }

  return consecutive
};

nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1]
k = 3

console.log(longestOnes(nums, k))