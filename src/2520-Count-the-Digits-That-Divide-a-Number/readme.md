# 2520. Count the Digits That Divide a Number

`Easy` <br />
Given an integer `num`, return the number of digits in `num` that divide `num`.

An integer `val` divides `nums` if `nums % val == 0`.

**Example 1:**

> **Input:** num = 7 <br />
> **Output:** 1 <br />
> **Explanation:** 7 divides itself, hence the answer is 1.

**Example 2:**

> **Input:** num = 121 <br />
> **Output:** 2 <br />
> **Explanation:** 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.

**Example 3:**

> **Input:** num = 1248 <br />
> **Output:** 4 <br />
> **Explanation:** 1248 is divisible by all of its digits, hence the answer is 4.

**Constraints:**

- `1 <= num <= 109`
- `num does not contain 0 as one of its digits.`

[**See the problem on LeetCode**](https://leetcode.com/problems/count-the-digits-that-divide-a-number/)