#include <stdio.h>
#include <string.h>
#include <assert.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {

    // Typical test
    char a[] = "flower";
    char b[] = "flow";
    char c[] = "flight";
    char* words1[] = {a, b, c};

    assert(strcmp(longestCommonPrefix(words1, 3), "fl") == 0);

    // Edge case: no common prefix
    char d[] = "dog";
    char e[] = "racecar";
    char f[] = "car";
    char* words2[] = {d, e, f};

    assert(strcmp(longestCommonPrefix(words2, 3), "") == 0);

    printf("05-longest-common-prefix: all tests passed\n");

    return 0;
}