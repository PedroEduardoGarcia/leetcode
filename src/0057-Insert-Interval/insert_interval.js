/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(intervals, newInterval) {
  let left = []
  let right = []
  
  for (const interv of intervals) {
    if (interv[1] < newInterval[0]) {
      left.push(interv)
    } 
    else if (interv[0] > newInterval[1]) {
      right.push(interv)
    } 
    else {
      newInterval = [Math.min(interv[0], newInterval[0]), Math.max(interv[1], newInterval[1])]
    }
  }
  
  left.push(newInterval)
  left.push(...right)
  
  return left
};

let intervals = [[1,3],[6,9]]
let new_interval = [2,5]

console.log(insert(intervals, new_interval))