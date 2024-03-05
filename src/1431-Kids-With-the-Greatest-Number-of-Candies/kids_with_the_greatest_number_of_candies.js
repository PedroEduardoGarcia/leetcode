/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
  let ans = []
  let h = Math.max(...candies)

  for (let i = 0; i < candies.length; i++) {
    if (candies[i] + extraCandies >= h) {
      ans.push(true)
    }
    else {
      ans.push(false)
    }
  }

  return ans
};

let candies = [2,3,5,1,3]
let extra_candies = 3

console.log(kidsWithCandies(candies, extra_candies))