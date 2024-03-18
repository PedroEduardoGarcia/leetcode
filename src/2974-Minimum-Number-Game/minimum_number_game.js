/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function(nums) {
  let arr = []
  nums.sort((a, b) => a - b)
  let i = 0

  while (i < nums.length) {
    arr.push(nums[i + 1])
    arr.push(nums[i])
    i += 2
  }

  return arr
};

let nums = [5,4,2,3]

console.log(numberGame(nums))