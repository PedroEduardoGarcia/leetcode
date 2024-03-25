/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
  let ans = []

  for (let i = 0; i < nums.length; i++) {
    const pos = Math.abs(nums[i]) - 1

    if (nums[pos] < 0) {
      ans.push(pos + 1)
    }

    nums[pos] = -nums[pos]
  }

  return ans
};

let nums = [4,3,2,7,8,2,3,1]
console.log(solution.findDuplicates(nums))