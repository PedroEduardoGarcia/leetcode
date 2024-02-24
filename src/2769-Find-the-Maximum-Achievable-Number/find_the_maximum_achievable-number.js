/**
 * @param {number} num
 * @param {number} t
 * @return {number}
 */
var theMaximumAchievableX = function(num, t) {
  let x = 0

  num += t
  x += num + t
  return x
};

num = 3
t = 2

console.log(theMaximumAchievableX(num, t))