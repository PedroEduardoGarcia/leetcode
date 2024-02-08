/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  let non_zero_index = 0

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== 0) {
      [nums[i], nums[non_zero_index]] = [nums[non_zero_index], nums[i]]
      non_zero_index++
    }
  }
};

nums = [0,1,0,3,12]
moveZeroes(nums)
console.log(nums)
