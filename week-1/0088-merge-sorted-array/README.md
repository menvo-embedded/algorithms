<h2><a href="https://leetcode.com/problems/merge-sorted-array/">88. Merge Sorted Array</a></h2><h3>Easy</h3>

## Problem

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2`, respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The merged array must be stored in `nums1`, which has a length of `m + n`. The first `m` elements of `nums1` are the elements to merge, and the last `n` elements are set to `0` and should be ignored. `nums2` has `n` elements.

## Examples

**Example 1**
- Input: `nums1 = [1,2,3,0,0,0]`, `m = 3`, `nums2 = [2,5,6]`, `n = 3`
- Output: `[1,2,2,3,5,6]`

**Example 2**
- Input: `nums1 = [1]`, `m = 1`, `nums2 = []`, `n = 0`
- Output: `[1]`

**Example 3**
- Input: `nums1 = [0]`, `m = 0`, `nums2 = [1]`, `n = 1`
- Output: `[1]`

## Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`
