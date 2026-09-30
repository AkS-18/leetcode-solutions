#include <stdio.h>
#include <string.h>
#include <assert.h>

int isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[++top] = current;
        } 
        else {
            if (top == -1) {
                return 0;
            }

            char opening = stack[top--];

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {

    // Typical test
    assert(isValid("()[]{}") == 1);

    // Edge case: mismatched brackets
    assert(isValid("(]") == 0);

    printf("08-valid-parentheses: all tests passed\n");

    return 0;
}