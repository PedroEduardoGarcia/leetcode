# 414. Third Maximum Number

`Easy` <br />
Given an integer array `nums`, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

**Example 1:**

> **Input**: nums = [3,2,1] <br />
> **Output:** 1 <br />
> **Explanation:** <br />
> The first distinct maximum is 3. <br />
> The second distinct maximum is 2. <br />
> The third distinct maximum is 1.

**Example 2:**

> **Input**: nums = [1,2] <br />
> **Output:** 2 <br />
> **Explanation:** <br />
> The first distinct maximum is 2. <br />
> The second distinct maximum is 1. <br />
> The third distinct maximum does not exist, so the maximum (2) is returned instead.

Example 3:

> **Input**: nums = [2,2,3,1] <br />
> **Output:** 1 <br />
> **Explanation:** <br />
> The first distinct maximum is 3. <br />
> The second distinct maximum is 2 (both 2's are counted together since they have the same value). <br />
> The third distinct maximum is 1.

**Constraints:**

- `1 <= nums.length <= 104`
- `-231 <= nums[i] <= 231 - 1`

[**See the problem on LeetCode**](https://leetcode.com/problems/third-maximum-number/)