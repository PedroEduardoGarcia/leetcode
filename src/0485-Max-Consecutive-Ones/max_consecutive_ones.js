/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
  consecutive_ones = 0
  max_consecutive_ones = 0

  for (let i = 0; i < nums.length; i++) {
      if (nums[i] == 1) {
          consecutive_ones += 1
          if (consecutive_ones > max_consecutive_ones) {
              max_consecutive_ones = consecutive_ones
          }
      }
      else {
          consecutive_ones = 0
      }
  }
  return max_consecutive_ones
}

nums = [1,1,0,1,1,1]

console.log(findMaxConsecutiveOnes(nums))