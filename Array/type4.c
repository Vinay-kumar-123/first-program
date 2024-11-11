// Find largest and smallest number using array.

#include <stdio.h>

int main() {
    int i, f;
    int a[100];
    
    
    int smallest, largest;

    // Input length and elements for the first array
    printf("Enter the length of the first array: ");
    scanf("%d", &f);
    for (i = 0; i < f; i++) {
        printf("Element of the first array: ");
        scanf("%d", &a[i]);
    }

  

    // Find the smallest and largest elements in the combined array
    smallest = a[0];
    largest = a[0];

    for (i = 1; i < f ; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Output the smallest and largest elements
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
