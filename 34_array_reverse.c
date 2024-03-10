#include <stdio.h>

void readArray(int *arr, int size);
void printArray(const int *arr, int size);
void reverseArray(int *arr, int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers:\n", size);
    readArray(array, size);
    printf("Original Array: ");
    printArray(array, size);
    reverseArray(array, size);
    printf("Array after reversing: ");
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

void reverseArray(int *arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

