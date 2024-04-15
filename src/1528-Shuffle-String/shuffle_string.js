/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
  let ans = Array(s.length).fill('')

  for (let i = 0; i < indices.length; i++) {
    ans[indices[i]] = s.charAt(i)
  }

  return ans.join('')
};

const s = "codeleet"
const indices = [4,5,6,7,0,2,1,3]

console.log(restoreString(s, indices))