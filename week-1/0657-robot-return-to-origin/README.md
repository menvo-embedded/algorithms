<h2><a href="https://leetcode.com/problems/robot-return-to-origin/">657. Robot Return to Origin</a></h2><h3>Easy</h3>

## Problem

A robot starts at the origin `(0, 0)` on a 2D plane. Given a string `moves` describing its moves in order, return `true` if the robot ends up back at the origin after all moves, otherwise return `false`.

Each character is one move of the same length: `'R'` (right), `'L'` (left), `'U'` (up), `'D'` (down). The direction the robot is facing does not matter.

## Examples

**Example 1**
- Input: `moves = "UD"`
- Output: `true`

**Example 2**
- Input: `moves = "LL"`
- Output: `false`

## Constraints

- `1 <= moves.length <= 2 * 10^4`
- `moves` only contains the characters `'U'`, `'D'`, `'L'` and `'R'`.
