/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
  const result = [];

  for (const num of nums) {
    const index = Math.abs(num) - 1;
    nums[index] = -Math.abs(nums[index]);
  }

  for (let i = 0; i < nums.length; ++i) {
    if (nums[i] > 0) {
    result.push(i + 1);
    }
  }

  return result;
};

nums = [4,3,2,7,8,2,3,1]

console.log(findDisappearedNumbers(nums))