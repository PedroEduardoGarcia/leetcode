/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
  let highest = 0
  let altitude = 0

  for (let a of gain) {
    altitude += a
    if (altitude > highest) {
      highest = altitude
    }
  }

  return highest
};

const gain = [-5,1,5,0,-7]

console.log(solution.countMatches(gain))