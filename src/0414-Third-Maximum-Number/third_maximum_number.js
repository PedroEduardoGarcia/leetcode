/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
  let firstMax = -Infinity;
  let secondMax = -Infinity;
  let thirdMax = -Infinity;

  for (const num of nums) {
    if (num > firstMax) {
      thirdMax = secondMax;
      secondMax = firstMax;
      firstMax = num;
    } else if (num < firstMax && num > secondMax) {
      thirdMax = secondMax;
      secondMax = num;
    } else if (num < secondMax && num > thirdMax) {
      thirdMax = num;
    }
  }

  return (thirdMax !== -Infinity) ? thirdMax : firstMax;
};

nums = [2,2,3,1]

console.log(thirdMax(nums))
