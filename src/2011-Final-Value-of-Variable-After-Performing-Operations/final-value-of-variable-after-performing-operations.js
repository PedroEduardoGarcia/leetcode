/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
  let x = 0

  for (let s of operations) {
      if (s.includes('+')) {
          x += 1
      } 
      else x -= 1
  }
  return x
};

let operations = ["--X","X++","X++"]

console.log(finalValueAfterOperations(celsius))