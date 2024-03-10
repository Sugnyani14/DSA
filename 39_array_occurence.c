//write a C program that reads an array of integers from the user and display the the occurence of the integer in array
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

    int occurrences[n];

    for (int i = 0; i < n; i++) {
        occurrences[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (occurrences[i] != -1) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                occurrences[j] = 0;
            }
        }

        occurrences[i] = count;
        printf("The integer %d occurs %d time(s) in the array.\n", arr[i], count);
    }

    return 0;
}

