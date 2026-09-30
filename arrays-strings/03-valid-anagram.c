#include <stdio.h>
#include <string.h>
#include <assert.h>

int isAnagram(char* s, char* t) {
    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    // Typical test
    assert(isAnagram("anagram", "nagaram") == 1);

    // Edge case: different lengths
    assert(isAnagram("rat", "car") == 0);

    printf("03-valid-anagram: all tests passed\n");

    return 0;
}