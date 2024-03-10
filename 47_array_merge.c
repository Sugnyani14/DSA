// write a C program that reads an two arrays from the user and merge the elements of both the arrays
#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int size_merged = size1 + size2;
    int mergedArr[size_merged];
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
    printf("\nMerged Array: ");
    for (int i = 0; i < size_merged; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}

