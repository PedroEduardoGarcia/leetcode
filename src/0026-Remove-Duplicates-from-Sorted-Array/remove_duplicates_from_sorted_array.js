/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
  removing = nums[nums.length - 1]
  k = nums.length
  nums_len  = nums.length - 2

  while (nums_len >= 0){
      if (nums[nums_len] == removing) {
          nums.splice(nums_len, 1)
          k--
      }
      else {
          removing = nums[nums_len]
      }
      nums_len--
  }
  return k
};

nums = [0,0,1,1,1,2,2,3,3,4]

console.log(removeDuplicates(nums), nums)