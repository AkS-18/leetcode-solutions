## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

The solution uses a position pointer to place all non-zero elements at the beginning of the array while preserving their relative order. After all non-zero elements have been placed, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The array is modified in-place without creating another array. The solution also preserves the original order of all non-zero elements.