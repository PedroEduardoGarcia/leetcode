/**
 * @param {number[]} nums
 * @return {number}
 */
var minStartValue = function(nums) {
  let min_start = 0
  let curr_sum = 0

  nums.forEach((n) => {
    curr_sum += n
    if (min_start < (1 - curr_sum)) min_start = 1 - curr_sum
  })
  
  if (min_start > 0) return min_start
  else return 1
};

nums = [-3,2,-3,4,2]

console.log(minStartValue(nums))