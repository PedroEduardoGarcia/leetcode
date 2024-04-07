# 1662. Check If Two String Arrays are Equivalent

`Easy` <br />
Given two string arrays `word1` and `word2`, return `true` if the two arrays represent the same string, and `false` otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

**Example 1:**

> **Input:** word1 = ["ab", "c"], word2 = ["a", "bc"] <br />
> **Output:** true <br /> 
> **Explanation:** <br />
> word1 represents string "ab" + "c" -> "abc" <br />
> word2 represents string "a" + "bc" -> "abc" <br />
> The strings are the same, so return true.

**Example 2:**

> **Input:** word1 = ["a", "cb"], word2 = ["ab", "c"] <br />
> **Output:** false

**Example 3:**

> **Input:** word1  = ["abc", "d", "defg"], word2 = ["abcddefg"] <br />
> **Output:** true

**Constraints:**

- `1 <= word1.length, word2.length <= 103`
- `1 <= word1[i].length, word2[i].length <= 103`
- `1 <= sum(word1[i].length), sum(word2[i].length) <= 103`
- `word1[i] and word2[i] consist of lowercase letters.`

[**See the problem on LeetCode**](https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/)