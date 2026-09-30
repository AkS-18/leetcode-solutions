#include <stdio.h>
#include <assert.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {

    // Typical test
    int a[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(a, 6) == 5);

    // Edge case: prices only decrease
    int b[] = {7, 6, 4, 3, 1};
    assert(maxProfit(b, 5) == 0);

    printf("04-best-time-to-buy-and-sell-stock: all tests passed\n");

    return 0;
}