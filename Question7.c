#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char *input;
    int length;
    printf("Enter a string: ");
    input = (char *)malloc(1000 * sizeof(char));
    if (input == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    fgets(input, 1000, stdin);
    input[strcspn(input, "\n")] = 0;
    length = strlen(input);
    if (isPalindrome(input, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    free(input); 
    return 0;
}
