/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
  let ans = 0
  let index

  if (ruleKey === "type") {
    index = 0
  } else if (ruleKey === "color") {
    index = 1
  } else if (ruleKey === "name") {
    index = 2
  }

  for (let item of items) {
    if (item[index] === ruleValue) {
      ans += 1
    }
  }

  return ans
};

const items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]
const ruleKey = "color"
const ruleValue = "silver"

console.log(solution.countMatches(items, ruleKey, ruleValue))