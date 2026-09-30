#include <stdio.h>
#include <assert.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {

    // Typical test
    int a[] = {0, 1, 0, 3, 12};
    int expectedA[] = {1, 3, 12, 0, 0};

    moveZeroes(a, 5);

    for (int i = 0; i < 5; i++) {
        assert(a[i] == expectedA[i]);
    }

    // Edge case: all zeroes
    int b[] = {0, 0, 0};
    int expectedB[] = {0, 0, 0};

    moveZeroes(b, 3);

    for (int i = 0; i < 3; i++) {
        assert(b[i] == expectedB[i]);
    }

    printf("07-move-zeroes: all tests passed\n");

    return 0;
}