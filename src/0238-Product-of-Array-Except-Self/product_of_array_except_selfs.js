/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
  let n = nums.length
  let left_products  = new Array(n).fill(1)
  let right_products  = new Array(n).fill(1)
  let ans = new Array(n).fill(1)
  
  for (let i = 1; i < n; i++) {
    left_products [i] = left_products [i - 1] * nums[i - 1]
  }
  
  for (let i = n - 2; i >= 0; i--) {
    right_products [i] = right_products [i + 1] * nums[i + 1]
  }
  
  for (let i = 0; i < n; i++) {
    ans[i] = left_products [i] * right_products [i]
  }
  
  return ans
};

let nums = [1,2,3,4]

console.log(productExceptSelf(nums))