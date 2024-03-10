// write a C program that reads an array of integers from the user and delete element at the desired position
#include <stdio.h>

int main() {
    int n;
    int arr[n];
    int position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position. Position should be between 1 and %d.\n", n);
        return 1;
    }

    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion at position %d:\n", position);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

