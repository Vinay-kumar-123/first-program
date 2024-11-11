// Write a program to concatenate two array.

#include <stdio.h>

int main() {
    int i, f, s;
    int a[100];
    int b[100];
    int c[200];

    // Input length and elements for the first array
    printf("Enter the length of the first array: ");
    scanf("%d", &f);
    for (i = 0; i < f; i++) {
        printf("Element of the first array: ");
        scanf("%d", &a[i]);
    }

    // Input length and elements for the second array
    printf("Enter the length of the second array: ");
    scanf("%d", &s);
    for (i = 0; i < s; i++) {
        printf("Element of the second array: ");
        scanf("%d", &b[i]);
    }

    // Concatenate arrays
    for (i = 0; i < f; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < s; i++) {
        c[f + i] = b[i];
    }

    // Output concatenated array
    printf("Concatenated array: ");
    for (i = 0; i < (f + s); i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
