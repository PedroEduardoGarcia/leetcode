# 2703. Return Length of Arguments Passed

`Easy` <br />
Write a function `argumentsLength` that returns the count of arguments passed to it.

**Example 1:**

> **Input:** args = [5] <br />
> **Output:** 1 <br />
> **Explanation:** <br />
> argumentsLength(5); // 1 <br />
> One value was passed to the function so it should return 1.

**Example 2:**

> **Input:** args = [{}, null, "3"] <br />
> **Output:** 3 <br />
> **Explanation:**  <br />
> argumentsLength({}, null, "3"); // 3 <br />
> Three values were passed to the function so it should return 3.

**Constraints:**

- `args is a valid JSON array`
- `0 <= args.length <= 100`

[**See the problem on LeetCode**](https://leetcode.com/problems/return-length-of-arguments-passed/)