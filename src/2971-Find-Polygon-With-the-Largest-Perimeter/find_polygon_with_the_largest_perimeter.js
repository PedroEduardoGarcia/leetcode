/**
 * @param {number[]} nums
 * @return {number}
 */
var largestPerimeter = function(nums) {
  nums.sort((a, b) => b - a)
  let total_sum = nums.reduce((a, b) => a + b, 0)
  let output = 0

  for (let i = 0; i < nums.length; i++){
    if (output == 0) {
      if (total_sum - (2 * nums[i]) > 0) {
        output += nums[i]
      }
      else {
        total_sum -= nums[i]
      }
    }
    else {
      output += nums[i]
    }
  }

  if (output > 0) return output
  else return -1
};

nums = [1,12,1,2,5,50,3]

console.log(largestPerimeter(nums))