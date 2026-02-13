#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 3;

    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Values using malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    int *ptr2;
    ptr2 = (int*)calloc(3, sizeof(int));

    printf("\nValues using calloc:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr2[i]);
    }
    n = 5;
    ptr = (int*)realloc(ptr, n * sizeof(int));

    printf("\nEnter 2 more elements:\n");
    for (int i = 3; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("After realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

}