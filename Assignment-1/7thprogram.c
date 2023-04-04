#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        count++;
        num /= 10;
    }

    printf("The number of digits in the given integer is %d\n", count);

    return 0;
}