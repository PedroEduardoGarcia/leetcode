/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
  k = 0
  nums_len = nums.length - 1
  while (nums_len >= 0) {
    if (nums[nums_len] === val) {
      nums.splice(nums_len, 1)
    }
    else {
      k++
    }
    nums_len--
  }
  return k
};

nums = [3,2,2,3]
val = 3

console.log(removeElement(nums, val), nums)
