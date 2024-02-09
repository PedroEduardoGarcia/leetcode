/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
  let even_index = 0

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] % 2 === 0) {
      [nums[i], nums[even_index]] = [nums[even_index], nums[i]]
      even_index++
    }
  }
    return nums
}

nums = [3,1,2,4]

console.log(sortArrayByParity(nums))