#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {

    // Typical test
    char a[] = "hello";
    reverseString(a, strlen(a));
    assert(strcmp(a, "olleh") == 0);

    // Edge case: single character
    char b[] = "a";
    reverseString(b, strlen(b));
    assert(strcmp(b, "a") == 0);

    printf("02-reverse-string: all tests passed\n");

    return 0;
}