#include <stdio.h>

int main() {
    int decimal_num, remainder, binary_num = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num > 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * base;
        decimal_num /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d", binary_num);

    return 0;
}
