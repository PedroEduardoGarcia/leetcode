/**
 * @param {string} key
 * @param {string} message
 * @return {string}
 */
var decodeMessage = function(key, message) {
  let sub_table = {}
  let key_index = 0

  for (let i = 0; i < key.length; i++) {
    let c = key[i]

    if (c !== ' ' && !(c in sub_table)) {
      sub_table[c] = String.fromCharCode('a'.charCodeAt(0) + key_index)
      key_index += 1
      
      if (key_index === 26){
        break
      }
    }
  }

  let ans = ''

  for (let i = 0; i < message.length; i++) {
    let c = message[i]

    if (c === ' ') {
      ans += ' '
    }
    else if (c in sub_table) {
      ans += sub_table[c]
    }
  }

  return ans
};

let key = "the quick brown fox jumps over the lazy dog"
let message = "vkbs bs t suepuv"

console.log(decodeMessage(key, message))