## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

The solution uses a stack to keep track of opening brackets. When a closing bracket is encountered, it is compared with the most recently added opening bracket. The string is valid only if every closing bracket matches correctly and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

An empty stack when a closing bracket is encountered means the brackets are incorrectly ordered. The solution also checks that no unmatched opening brackets remain after processing the entire string.