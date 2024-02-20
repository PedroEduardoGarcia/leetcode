/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
  const nums_len = nums.length
  let total_sum = 0
  let missing = 0

  for (let i = 0; i < nums_len; i++) {
    total_sum += i
    missing += nums[i]
  }

  return total_sum - missing + nums_len
};

nums = [9,6,4,2,3,5,7,0,1]

console.log(missingNumber(nums))