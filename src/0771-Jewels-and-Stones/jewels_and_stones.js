/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
  let ans = 0
    for (let i = 0; i < stones.length; i++) {
        for (let j = 0; j < jewels.length; j++) {
            if (stones[i] === jewels[j]) {
                ans += 1
            }
        }
    }
    return ans
};

jewels = "aA"
stones = "aAAbbbb"

console.log(numJewelsInStones(jewels, stones))