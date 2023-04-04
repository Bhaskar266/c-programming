#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes = amount / 500;
    amount %= 500;
    printf("Rs. 500 notes: %d\n", notes);

    notes = amount / 100;
    amount %= 100;
    printf("Rs. 100 notes: %d\n", notes);

    notes = amount / 50;
    amount %= 50;
    printf("Rs. 50 notes: %d\n", notes);

    notes = amount / 20;
    amount %= 20;
    printf("Rs. 20 notes: %d\n", notes);

    notes = amount / 10;
    amount %= 10;
    printf("Rs. 10 notes: %d\n", notes);

    notes = amount / 5;
    amount %= 5;
    printf("Rs. 5 coins: %d\n", notes);

    notes = amount / 2;
    amount %= 2;
    printf("Rs. 2 coins: %d\n", notes);

    notes = amount / 1;
    printf("Rs. 1 coins: %d\n", notes);

    return 0;
}