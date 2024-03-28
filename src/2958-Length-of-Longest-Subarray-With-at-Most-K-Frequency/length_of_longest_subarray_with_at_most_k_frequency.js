/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxSubarrayLength = function(nums, k) {
  let left = 0
  let right = 0
  let ans = 0
  let frequency = {}
  const n = nums.length

  for (right = 0; right < n; right++) {
    if (!(nums[right] in frequency)) {
      frequency[nums[right]] = 0
    }

    frequency[nums[right]] += 1
    
    while (frequency[nums[right]] > k) {
      frequency[nums[left]] -= 1
      left += 1
    }

    ans = Math.max(ans, right - left + 1)
  }
  
  return ans
};

let nums = [1,2,3,1,2,3,1,2]
let k = 2

console.log(solution.maxSubarrayLength(nums, k))