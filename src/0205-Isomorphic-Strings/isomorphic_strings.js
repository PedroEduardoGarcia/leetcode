/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
  if (s.length !== t.length) {
    return false
  }
  
  let s_to_t = new Map()
  let t_to_s = new Map()
  
  for (let i = 0; i < s.length; i++) {
    let char_s = s.charAt(i)
    let char_t = t.charAt(i)
    
    if (s_to_t.has(char_s)) {
      if (s_to_t.get(char_s) !== char_t) {
        return false
      }
    } else {
      s_to_t.set(char_s, char_t)
    }
    
    if (t_to_s.has(char_t)) {
      if (t_to_s.get(char_t) !== char_s) {
        return false
      }
    } else {
        t_to_s.set(char_t, char_s)
    }
  }
  
  return true
}


const s = "egg"
const t = "add"

console.log(isIsomorphic(s, t))
