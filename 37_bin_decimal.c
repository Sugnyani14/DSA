//write a c code to convert given binary number to decimal
#include <stdio.h>

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, base = 1, remainder;

    while (binaryNumber > 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
