#include <stdio.h>

int main() {
    double income, tax = 0;

    printf("Enter your income: ");
    scanf("%lf", &income);

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
    }

    printf("Income Tax: %.2f rupees\n", tax);

    return 0;
}