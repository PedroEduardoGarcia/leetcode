/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
  if (n % 2 === 0) return n
  else return n * 2 
};

let n = 5

console.log(smallestEvenMultiple(n))