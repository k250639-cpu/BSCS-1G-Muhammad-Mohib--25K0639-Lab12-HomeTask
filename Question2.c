#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char *str;
    printf("Enter maximum size of the string: ");
    scanf("%d", &size);
    getchar(); 
    str = (char*) malloc(size * sizeof(char));
    if(str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter a line of text: ");
    fgets(str, size, stdin);
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    printf("Reversed string: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    free(str);
    return 0;
}
