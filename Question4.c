#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    printf("Values after calloc:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    for(int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }
    printf("\nValues after modifying calloc array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    ptr = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 100;
    }
    printf("\nValues after malloc reuse:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
