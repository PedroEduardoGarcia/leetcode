/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
  let numsSet = new Set()

  for (const num of nums) {
    if (numsSet.has(num)) {
      return num
    }
    numsSet.add(num)
  }
};

let nums = [1, 3, 4, 2, 2]
console.log(solution.findDuplicate(nums))