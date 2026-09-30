#include <stdio.h>
#include <assert.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    // Typical test
    int a[] = {-1, 0, 3, 5, 9, 12};
    assert(search(a, 6, 9) == 4);

    // Edge case: target not present
    int b[] = {-1, 0, 3, 5, 9, 12};
    assert(search(b, 6, 2) == -1);

    printf("06-binary-search: all tests passed\n");

    return 0;
}