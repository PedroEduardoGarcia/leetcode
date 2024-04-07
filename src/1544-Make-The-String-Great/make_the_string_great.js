/**
 * @param {string} s
 * @return {string}
 */
var makeGood = function(s) {
  let stack = [];
        
  for (const c of s) {
    if (stack.length && Math.abs(stack[stack.length - 1].charCodeAt(0) - c.charCodeAt(0)) === 32) {
      stack.pop();
    } else {
      stack.push(c);
    }
  }
  
  let ans = stack.join('');
  return ans
};

const s = s = "leEeetcode"

console.log(makeGood(s))
