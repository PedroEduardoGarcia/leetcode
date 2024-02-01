# 27. Remove Element

`Easy` <br />
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

**Custom Judge:**

The judge will test your solution with the following code:

> int[] nums = [...]; // Input array <br />
> int val = ...; // Value to remove <br />
> int[] expectedNums = [...]; // The expected answer with correct length. <br />
>                             // It is sorted with no values equaling val. <br />
> <br />
> int k = removeElement(nums, val); // Calls your implementation <br />
> <br />
> assert k == expectedNums.length; <br />
> sort(nums, 0, k); // Sort the first k elements of nums <br />
> for (int i = 0; i < actualLength; i++) { <br />
>     assert nums[i] == expectedNums[i]; <br />
> }

If all assertions pass, then your solution will be accepted.

**Example 1:**

> **Input:** nums = [3,2,2,3], val = 3 <br />
> **Output:** 2, nums = [2,2,_,_] <br />
> **Explanation:** Your function should return k = 2, with the first two elements of nums being 2. <br />
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Example 2:**

> **Input:** nums = [0,1,2,2,3,0,4,2], val = 2 <br />
> **Output:** 5, nums = [0,1,4,0,3,_,_,_] <br />
> **Explanation:** Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4. <br />
> Note that the five elements can be returned in any order. <br />
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Constraints:**

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

[**See the problem on LeetCode**](https://leetcode.com/problems/remove-element/)