/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
  let words = s.split(" ")
  let ans = words.slice(0, k).join(" ")

  return ans
};

let s = "Hello how are you Contestant"
let k = 4

console.log(sumOfMultiples(n))