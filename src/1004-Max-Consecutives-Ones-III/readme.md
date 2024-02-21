# 1004. Max Consecutive Ones III

`Medium` <br />
Given a binary array `nums` and an integer `k`, return the maximum number of consecutive `1`'s in the array if you can flip at most `k` `0`'s. 

**Example 1:**

> **Input:** nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2 <br />
> **Output:** 6 <br />
> **Explanation**: [1,1,1,0,0,**1**,1,1,1,1,**1**] <br />
> Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

**Example 2:**

> **Input:** nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3 <br />
> **Output:** 10 <br />
> **Explanation**: [0,0,1,1,**1**,**1**,1,1,1,**1**,1,1,0,0,0,1,1,1,1] <br />
> Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

**Constraints:**

- `1 <= nums.length <= 105`
- `nums[i] is either 0 or 1.`
- `0 <= k <= nums.length`

[**See the problem on LeetCode**](https://leetcode.com/problems/max-consecutive-ones-iii/)