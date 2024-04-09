/**
 * @param {number[]} tickets
 * @param {number} k
 * @return {number}
 */
var timeRequiredToBuy = function(tickets, k) {
  let time_taken = 0

  for (let i = 0; i < tickets.length; ++i) {
    if (i <= k) {
      time_taken += Math.min(tickets[i], tickets[k])
    } else {
      time_taken += Math.min(tickets[i], tickets[k] - 1)
    }
  }

  return time_taken
};

const tickets = [2, 3, 2];
const k = 2;

console.log(countStudents(tickets, k))
