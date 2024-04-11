/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */
var removeKdigits = function(num, k) {
  let stack = []
        
  for (let i = 0; i < num.length; i++) {
    while (k > 0 && stack.length > 0 && stack[stack.length - 1] > num[i]) {
      stack.pop()
      k -= 1
    }
    stack.push(num[i])
  }
  
  while (k > 0) {
    stack.pop()
    k -= 1
  }
  
  let result = ''
  let leadingZero = true
  for (let digit of stack) {
    if (leadingZero && digit === '0') {
      continue
    }
    leadingZero = false
    result += digit
  }
  
  return result === '' ? '0' : result
};

const num = "1432219"
const k = 3

console.log(removeKdigits(num, k))
