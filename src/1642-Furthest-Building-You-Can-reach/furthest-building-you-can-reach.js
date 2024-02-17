/**
 * @param {number[]} heights
 * @param {number} bricks
 * @param {number} ladders
 * @return {number}
 */
var furthestBuilding = function(heights, bricks, ladders) {
  let largest_jumps = new Array(ladders).fill(0)
  let i 
  for(i = 1; i < heights.length; i++) {
    let cost= heights[i] - heights[i-1]

    if (cost > 0) {
      if (cost > largest_jumps[0]) {
        let j = largest_jumps.length - 1

        while (j >= 0 && largest_jumps[j] > cost) {
          j -= 1
        }

        bricks -= largest_jumps.shift()
        largest_jumps.splice(j, 0, cost)
      }
      else {
        bricks -= cost
      }
      if (bricks < 0) {
        return i - 1
      }
    }
  }
  return i - 1
};

heights = [4,12,2,7,3,18,20,3,19]
bricks = 10
ladders = 2

console.log(furthestBuilding(heights, bricks, ladders))