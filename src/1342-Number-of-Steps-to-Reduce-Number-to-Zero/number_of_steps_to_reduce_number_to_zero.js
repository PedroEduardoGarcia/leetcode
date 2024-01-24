/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
  var steps = 0
  while ( num > 0 ) {
      if ((num & 1) == 0) {
          num >>= 1
      }
      else {
          num -= 1            
      }
      steps += 1
  }
  return steps
}

num = 14
console.log(numberOfSteps(num))