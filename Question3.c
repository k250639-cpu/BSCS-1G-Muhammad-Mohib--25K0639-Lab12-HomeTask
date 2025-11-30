#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    struct Student *ptr;
    printf("Enter number of students: ");
    scanf("%d", &n);
    ptr = (struct Student*) malloc(n * sizeof(struct Student));
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]s", (*(ptr + i)).name);

        printf("Enter marks: ");
        scanf("%d", &(*(ptr + i)).marks);
    }
    printf("\nStudents scoring more than 75:\n");
    for(i = 0; i < n; i++) {
        if((*(ptr + i)).marks > 75) {
            printf("Name: %s  |  Marks: %d\n", (*(ptr + i)).name, (*(ptr + i)).marks);
        }
    }
    free(ptr);
    return 0;
}
