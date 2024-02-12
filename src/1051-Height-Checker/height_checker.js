/**
 * @param {number[]} heights
 * @return {number}
 */
var heightChecker = function(heights) {
  const expected = [...heights].sort((a, b) => a - b)

  const count = heights.reduce((acc, height, index) => {
    return acc + (height !== expected[index] ? 1 : 0)
  }, 0)

  return count
};

heights = [1,1,4,2,1,3]

console.log(heightChecker(heights))