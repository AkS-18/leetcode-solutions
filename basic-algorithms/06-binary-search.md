## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

The solution uses binary search on the sorted array. Two pointers define the current search range, and the middle element is checked to determine which half of the array can be discarded.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted. If the target is not found after the search range becomes empty, the function returns -1.