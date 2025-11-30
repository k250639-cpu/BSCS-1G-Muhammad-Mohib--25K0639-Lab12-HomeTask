#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100];
    char *result;
    int len1 = 0, len2 = 0, i, j;
    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);
    while(str1[len1] != '\0') {
        len1++;
    }
    while(str2[len2] != '\0') {
        len2++;
    }
    result = (char*) malloc((len1 + len2 + 1) * sizeof(char));
    if(result == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    for(i = 0; i < len1; i++) {
        (*(result + i)) = str1[i];
    }
    for(j = 0; j < len2; j++) {
        (*(result + len1 + j)) = str2[j];
    }
    (*(result + len1 + len2)) = '\0';
    printf("\nConcatenated string: %s\n", result);
    free(result);
    return 0;
}
