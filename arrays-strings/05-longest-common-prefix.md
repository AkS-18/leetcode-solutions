## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The solution compares characters at the same position across all strings. Starting with the first string as the reference, it stops as soon as a character differs or one of the strings ends.

### Complexity

- Time: O(n × m), where n is the number of strings and m is the length of the shortest string.
- Space: O(1)

### Notes

If the strings have no characters in common at the beginning, the result is an empty string. The solution also handles cases where one string is shorter than the others.