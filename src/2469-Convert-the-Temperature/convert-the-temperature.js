/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function(celsius) {
  let kelvin = celsius + 273.15
  let farenheit = (celsius * 1.80) + 32.00

  ans = [kelvin, farenheit]
  return ans
};

let celsius = 122.11

console.log(convertTemperature(celsius))