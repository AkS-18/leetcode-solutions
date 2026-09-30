## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

The solution uses a frequency array of size 26 to count the occurrences of each lowercase English letter. Characters from the first string increase their corresponding counts, while characters from the second string decrease them. If all counts return to zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings must have the same length to be anagrams. A different-length input can be rejected immediately, while the frequency array handles duplicate characters efficiently.