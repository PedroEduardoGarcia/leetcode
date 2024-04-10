/**
 * @param {number[]} deck
 * @return {number[]}
 */
var deckRevealedIncreasing = function(deck) {
  let n = deck.length
  deck.sort((a, b) => a - b)
  let q = []

  for (let i = 0; i < n; i++) {
      q.push(i)
  }

  let ans = new Array(n).fill(0)

  for (let i = 0; i < n; i++) {
    ans[q.shift()] = deck[i]

    if (q.length > 0) {
      q.push(q.shift())
    }
  }

  return ans
};

let deck = [17, 13, 11, 2, 3, 5, 7]

console.log(deckRevealedIncreasing(deck))
