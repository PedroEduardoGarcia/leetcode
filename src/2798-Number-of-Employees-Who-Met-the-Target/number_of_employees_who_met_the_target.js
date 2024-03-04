/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function(hours, target) {
  let ans = 0;

  for (let i = 0; i < hours.length; i++) {
    if (hours[i] >= target) ans += 1
  }

  return ans
};

let hours = [0,1,2,3,4]
let target = 2

console.log(numberOfEmployeesWhoMetTarget(hours, target))
