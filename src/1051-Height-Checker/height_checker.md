# 1051. Height Checker

`Easy` <br />
A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array `expected` where `expected[i]` is the `expected` height of the `ith` student in line.

You are given an integer array `heights` representing the current order that the students are standing in. Each `heights[i]` is the height of the `ith` student in line (0-indexed).

Return the number of indices where `heights[i] != expected[i]`.

**Example 1:**

> **Input:** heights = [1,1,4,2,1,3] <br />
> **Output:** 3 <br />
> **Explanation:** <br />
> heights:  [1,1,4,2,1,3] <br />
> expected: [1,1,1,2,3,4] <br />
> Indices 2, 4, and 5 do not match.

**Example 2:** 

> **Input:** heights = [5,1,2,3,4] <br />
> **Output:** 5 <br />
> **Explanation:** <br />
> heights:  [5,1,2,3,4] <br />
> expected: [1,2,3,4,5] <br />
> All indices do not match.

**Example 3:**

> **Input:** heights = [1,2,3,4,5] <br />
> **Output:** 0 <br />
> **Explanation:** <br />
> heights:  [1,2,3,4,5] <br />
> expected: [1,2,3,4,5] <br />
> All indices match.

**Constraints:**

- `1 <= heights.length <= 100`
- `1 <= heights[i] <= 100`

[**See the problem on LeetCode**](https://leetcode.com/problems/height-checker/)