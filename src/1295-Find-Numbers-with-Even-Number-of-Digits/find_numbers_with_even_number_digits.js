/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
  even_digits_count = 0
        
  for (let i = 0; i < nums.length; i++) {
    count = 0
    while (nums[i] >= 1) {
      nums[i] = nums[i] / 10
      count += 1
    }
    if (count % 2 == 0) {
      even_digits_count += 1
    }
  }
    
  return even_digits_count
};

nums = [12,345,2,6,7896]
console.log(findNumbers(nums))