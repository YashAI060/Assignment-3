#include <stdio.h>

int main() {
    double purchaseAmount, finalAmount;
    char isMember;

    printf("Enter the purchase amount: ");
    scanf("%lf", &purchaseAmount);

    if (purchaseAmount > 2000) {
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &isMember);
        
        if (isMember == 'Y' || isMember == 'y') {
            finalAmount = purchaseAmount * 0.80; // 20% discount
        } else {
            finalAmount = purchaseAmount * 0.90; // 10% discount
        }
    } else {
        finalAmount = purchaseAmount; // No discount
    }

    printf("Final amount after discount: %.2f\n", finalAmount);

    return 0;
}