/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
  const set1 = new Set(nums1)
  const set2 = new Set(nums2)

  const ans = Array.from(new Set([...set1].filter(num => set2.has(num))))

  return ans
};

let nums1 = [1,2,2,1]
let nums2 = [2,2]

console.log(intersection(nums1, nums2))