# 1480. Running Sum of 1d Array

`Easy` <br />
Given an array nums. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.
Return the running sum of `nums`.

**Example 1:**

> **Input:** nums = [1,2,3,4] <br />
> **Output:** [1,3,6,10] <br />
> **Explanation:** Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]. <br />

**Example 2:**

> **Input:** nums = [1,1,1,1,1] <br />
> **Output:** [1,2,3,4,5] <br />
> **Explanation:** Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1]. <br />

**Example 3:**

> **Input:** nums = [3,1,2,10,1]
> **Output:** [3,4,6,16,17]

Constraints:

- `1 <= nums.length <= 1000`
- `-10^6 <= nums[i] <= 10^6`

[**See the problem on LeetCode**](https://leetcode.com/problems/running-sum-of-1d-array/)