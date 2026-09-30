#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* res = malloc(2 * sizeof(int));
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

// ---- local tests below (don't paste into LeetCode) ----
int main() {
    int size;

    // typical
    int a[] = {2, 7, 11, 15};
    int* r = twoSum(a, 4, 9, &size);
    assert(size == 2 && r[0] == 0 && r[1] == 1);
    free(r);

    // edge: duplicates
    int b[] = {3, 3};
    r = twoSum(b, 2, 6, &size);
    assert(size == 2 && r[0] == 0 && r[1] == 1);
    free(r);

    printf("01-two-sum: all tests passed\n");
    return 0;
}