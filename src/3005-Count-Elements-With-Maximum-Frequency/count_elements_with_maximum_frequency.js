/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
  let frequencies = {}
  let maxFrequency = 0
  let ans = 0

  for (let num of nums) {
    if (num in frequencies) {
      frequencies[num] += 1
    } 
    else {
      frequencies[num] = 1
    }

    if (maxFrequency < frequencies[num]) {
      maxFrequency = frequencies[num]
    }
  }

  for (let f in frequencies) {
    if (frequencies[f] == maxFrequency) {
      ans++
    }
  }

  return ans * maxFrequency
};

let nums = [1,2,2,3,1,4]

console.log(maxFrequencyElements(nums))