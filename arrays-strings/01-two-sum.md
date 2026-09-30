## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution uses a brute-force approach with two nested loops. Each pair of elements is checked to determine whether their sum equals the target value. When a valid pair is found, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1) excluding the returned array

### Notes

The solution checks every possible pair of elements and avoids using the same element twice by starting the inner loop from the element after the current outer-loop index. The duplicate-values case was also tested locally.