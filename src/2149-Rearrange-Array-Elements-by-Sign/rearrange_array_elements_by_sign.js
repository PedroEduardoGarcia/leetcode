/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
  let positive = []
  let negative = []
  let output = []

  nums.forEach(n => {
    if (n >= 0) {
      positive.push(n)
    }
    else {
      negative.push(n)
    }
  })

  for (let i = 0; i < positive.length; i++){
    output.push(positive[i])
    output.push(negative[i])
  }

  return output
};

nums = [3,1,-2,-5,2,-4]

console.log(rearrangeArray(nums))