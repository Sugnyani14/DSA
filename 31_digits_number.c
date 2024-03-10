//write a c code to count number of digits in a given number
#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    if (number < 0) {
        number = -number;
    }

    do {
        count++;
        number /= 10;
    } while (number != 0);

    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int digitCount = countDigits(num);
    printf("Number of digits: %d\n", digitCount);

    return 0;
}
