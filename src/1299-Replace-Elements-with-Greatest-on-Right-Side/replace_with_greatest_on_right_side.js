/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function(arr) {
  let arr_len = arr.length - 1
  let great_right

  while (arr_len >= 0) {
    if (arr_len === arr.length - 1) {
      great_right = arr[arr_len]
      arr[arr_len] = -1
    }
    else {
      let n = arr[arr_len]
      arr[arr_len] = great_right

      if (great_right < n) great_right = n
    }
    arr_len--
  }
  return arr
};

arr = [17,18,5,4,6,1]

console.log(replaceElements(arr))