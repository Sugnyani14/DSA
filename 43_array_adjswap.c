//write a C program that reads an array of integers from the user and does adjacent swap
#include <stdio.h>

void readArray(int *arr, int size);
void printArray(const int *arr, int size);
void swapAdjacent(int *arr, int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers:\n", size);
    readArray(array, size);

    printf("Original Array: ");
    printArray(array, size);

    swapAdjacent(array, size);
    printf("Array after adjacent swaps: ");
    printArray(array, size);

    return 0;
}

void readArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swapAdjacent(int *arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

