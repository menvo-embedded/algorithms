<h2><a href="https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/">1662. Check If Two String Arrays are Equivalent</a></h2><h3>Easy</h3>

## Problem

Given two string arrays `word1` and `word2`, return `true` if the two arrays represent the same string, and `false` otherwise.

An array represents a string when its elements, concatenated **in order**, form that string.

## Examples

**Example 1**
- Input: `word1 = ["ab","c"]`, `word2 = ["a","bc"]`
- Output: `true`
- Explanation: `"ab" + "c" = "abc"` and `"a" + "bc" = "abc"`, so both arrays represent the same string.

**Example 2**
- Input: `word1 = ["a","cb"]`, `word2 = ["ab","c"]`
- Output: `false`

**Example 3**
- Input: `word1 = ["abc","d","defg"]`, `word2 = ["abcddefg"]`
- Output: `true`

## Constraints

- `1 <= word1.length, word2.length <= 10^3`
- `1 <= word1[i].length, word2[i].length <= 10^3`
- `1 <= sum(word1[i].length), sum(word2[i].length) <= 10^3`
- `word1[i]` and `word2[i]` consist of lowercase letters.
