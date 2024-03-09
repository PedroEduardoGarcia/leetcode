/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var getCommon = function(nums1, nums2) {
  let ptr_1 = 0
  let ptr_2 = 0

  while (ptr_1 < nums1.length && ptr_2 < nums2.length) {
    if (nums1[ptr_1] === nums2[ptr_2]) {
      return nums1[ptr_1]
    }
    if (nums1[ptr_1] > nums2[ptr_2]) {
      ptr_2 += 1
    }
    else {
      ptr_1 += 1
    }
  }

  return -1
};

let nums1 = [1,2,3]
let nums2 = [2,4]

console.log(getCommon(nums1, nums2))