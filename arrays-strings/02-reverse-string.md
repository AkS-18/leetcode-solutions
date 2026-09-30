## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

The string is reversed in-place using two pointers. One pointer starts at the beginning and the other at the end, and their characters are swapped while the pointers move toward the center.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the original character array instead of creating another string. A single-character string is an edge case because it does not need any swapping.