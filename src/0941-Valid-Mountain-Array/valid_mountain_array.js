/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function(arr) {
  let value = arr[0]
  let arr_len = arr.length
  let i = 1
  let peak = false

  if (arr_len < 3) return false

  while (i < arr_len) {
    if (value === arr[i]) return false

    if (!peak) {
      if (value >= arr[i]) {
        if (i === 1) return false
        else {
          peak = true
          value = arr[i]
        }
      } 
      else value = arr[i]
    } 
    else if (peak) {
      if (value <= arr[i]) return false
      else value = arr[i]
    }
    i++
  }
  if (peak) return true
  else return false
};

arr = [3,7,20,14,15,14,10,8,2,1]

console.log(validMountainArray(arr))
