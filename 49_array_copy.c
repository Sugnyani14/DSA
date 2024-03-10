// write a C program that reads an array of integers from the user and copy element from one array to other
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    int source[n];
    int destination[n];

    printf("Enter %d integers for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("\nSource Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }


    printf("\nDestination Array (copied from source): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}

