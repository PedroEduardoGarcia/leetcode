/**
 * @param {string} s
 * @return {boolean}
 */
var checkValidString = function(s) {
  let open_p = 0
  let closed_p = 0

  for (let i = 0; i < s.length; i++) {
    const c = s.charAt(i)

    if (c === '(') {
      open_p += 1
      closed_p += 1
    } 

    else if (c === ')') {
      open_p -= 1
      closed_p -= 1
    }
    
    else {
      open_p -= 1
      closed_p += 1
    }

    if (closed_p < 0)
      return false

    if (open_p < 0)
      open_p = 0
  }

  return open_p === 0
};

const s = "(*))";

console.log(solution.arrayStringsAreEqual(word1, word2))