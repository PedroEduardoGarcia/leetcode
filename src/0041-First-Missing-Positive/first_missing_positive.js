/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function(nums) {
  nums.push(0)
  let i = 0
  const n = nums.length

  for (let j = 0; j < n; ++j) {
    if (nums[j] < 0 || nums[j] >= n) {
      nums[j] = n
    }
  }

  while (i < n) {
    const j = nums[i]
    if (nums[i] < n && nums[i] !== nums[j]) {
      [nums[i], nums[j]] = [nums[j], nums[i]]
    } 
    else {
      i++
    }
  }

  for (let i = 1; i < n; ++i) {
    if (nums[i] !== i) {
      return i
    }
  }
  return n
};

let nums = [3,4,-1,1]
console.log(solution.firstMissingPositive(nums))