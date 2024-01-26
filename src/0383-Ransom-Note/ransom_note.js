/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
  const char_map = new Map()

  for (let i = 0; i < magazine.length; i++) {
      let c = magazine.charAt(i);
      char_map.set(c, (char_map.get(c) || 0) + 1)
  }

  for (let i = 0; i < ransomNote.length; i++) {
      let c = ransomNote.charAt(i)
      if (!char_map.has(c) || char_map.get(c) === 0) {
          return false
      }
      char_map.set(c, char_map.get(c) - 1)
  }

  return true
}

magazine = "ab"
ransomNote = "aa"

console.log(canConstruct(ransomNote, magazine))