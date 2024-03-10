#include <stdio.h>

void read(int *a, int n);
void print(int *a, int n);
void rotate(int *a, int n, int k);

int main() {
    int n, a[100], k;

    printf("Enter n: ");
    scanf("%d", &n);

    read(a, n);
    printf("Original Array: ");
    print(a, n);

    printf("\nEnter the number of positions to rotate: ");
    scanf("%d", &k);

    rotate(a, n, k);

    printf("Array after rotation: ");
    print(a, n);

    return 0;
}

void read(int *a, int n) {
    printf("Enter the array values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
}

void print(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void rotate(int *a, int n, int k) {
    int i, j, temp;
    for (j = 0; j < k; j++) {
        temp = *(a + (n - 1));
        for (i = (n - 1); i > 0; --i) {
            *(a + i) = *(a + (i - 1));
        }
        *(a + 0) = temp;
    }
}
