## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The solution keeps track of the lowest stock price seen so far. For each later price, it calculates the possible profit by selling at that price and updates the maximum profit if the new value is higher.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold, so the minimum price is always taken from an earlier position. If the prices continuously decrease, the maximum profit remains zero.