/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findLeastNumOfUniqueInts = function(arr, k) {
  const frequency_map = new Map();

  for (const num of arr) {
    frequency_map.set(num, (frequency_map.get(num) || 0) + 1)
  }

  const sorted_frequency = [...frequency_map.entries()].sort((a, b) => a[1] - b[1])

  while (k > 0) {
    const [key, count] = sorted_frequency[0]
    if (count > 1) {
      sorted_frequency[0] = [key, count - 1]
    } 
    else {
      sorted_frequency.shift()
    }
    k -= 1
  }

  return sorted_frequency.length
};

arr = [4,3,1,1,3,3,2]
k = 3

console.log(findLeastNumOfUniqueInts(arr, k))