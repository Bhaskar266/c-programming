#include <stdio.h>

int main() {
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative or zero
    if (num > 0) {
        printf("%d is a positive number\n", num);
    }
    else if (num < 0) {
        printf("%d is a negative number\n", num);
    }
    else {
        printf("The entered number is 0\n");
    }

    return 0;
}
    
