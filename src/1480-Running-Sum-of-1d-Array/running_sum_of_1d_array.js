/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
  var output = []
  for (let i = 0; i < nums.length; i++) {
      if (i == 0) {
        output.push(nums[i])
      }
      else {
        output.push(nums[i] + output[i-1])
      }
  }
return output
}

nums = [1,2,3,4]
console.log(runningSum(nums))