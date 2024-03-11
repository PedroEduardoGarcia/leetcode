/**
 * @param {string} order
 * @param {string} s
 * @return {string}
 */
var customSortString = function(order, s) {
  const occ = {}
  let ans = ""

  for (const c of order) {
    occ[c] = 0
  }

  for (const c of s) {
    if (occ.hasOwnProperty(c)) {
      occ[c]++
    }
  }

  for (const [c, i] of Object.entries(occ)) {
    ans += c.repeat(i)
  }

  for (const c of s) {
    if (!order.includes(c)) {
      ans += c
    }
  }

  return ans
};

let order = "hucw"
let s = "utzoampdgkalexslxoqfkdjoczajxtuhqyxvlfatmptqdsochtdzgypsfkgqwbgqbcamdqnqztaqhqanirikahtmalzqjjxtqfnh"

console.log(customSortString(order, s))