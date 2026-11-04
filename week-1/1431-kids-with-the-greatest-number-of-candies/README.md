<h2><a href="https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/">1431. Kids With the Greatest Number of Candies</a></h2><h3>Easy</h3>

## Problem

Given an integer array `candies`, where `candies[i]` is the number of candies the i-th kid has, and an integer `extraCandies`, return a boolean array `result` of length `n`.

`result[i]` is `true` if, after giving **all** `extraCandies` to the i-th kid, that kid has the greatest number of candies among all kids (ties allowed). Otherwise it is `false`.

## Examples

**Example 1**
- Input: `candies = [2,3,5,1,3]`, `extraCandies = 3`
- Output: `[true,true,true,false,true]`

**Example 2**
- Input: `candies = [4,2,1,1,2]`, `extraCandies = 1`
- Output: `[true,false,false,false,false]`

**Example 3**
- Input: `candies = [12,1,12]`, `extraCandies = 10`
- Output: `[true,false,true]`

## Constraints

- `n == candies.length`
- `2 <= n <= 100`
- `1 <= candies[i] <= 100`
- `1 <= extraCandies <= 50`
