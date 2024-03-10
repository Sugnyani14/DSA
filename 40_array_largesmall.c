// write a C program that reads an array of integers from the user and display smallest and largest element in the array
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        } else if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The smallest element is: %d\n", smallest);
    printf("The largest element is: %d\n", largest);

    return 0;
}

