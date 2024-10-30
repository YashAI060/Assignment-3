#include <stdio.h>

int main() {
    double balance, withdrawalAmount;
    char specialPermit;

    printf("Enter account balance: ");
    scanf("%lf", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%lf", &withdrawalAmount);

    if (balance >= withdrawalAmount) {
        if (withdrawalAmount > 10000) {
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &specialPermit);
            if (specialPermit == 'Y' || specialPermit == 'y') {
                printf("Withdrawal approved.\n");
            } else {
                printf("Withdrawal denied. Special permit required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal approved.\n");
        }
    } else {
        printf("Insufficient balance.\n");
    }

    return 0;
}