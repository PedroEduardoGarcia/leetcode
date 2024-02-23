/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
  let ans = nums
  return ans.concat(nums)
};

nums = [1,2,1]

console.log(getConcatenation(nums))