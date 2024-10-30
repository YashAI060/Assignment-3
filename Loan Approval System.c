#include <stdio.h>

int main() {
    double monthlyIncome;
    char hasExistingLoan, overduePayments;

    printf("Enter your monthly income: ");
    scanf("%lf", &monthlyIncome);

    if (monthlyIncome > 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &hasExistingLoan);
        
        if (hasExistingLoan == 'Y' || hasExistingLoan == 'y') {
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &overduePayments);
            if (overduePayments == 'Y' || overduePayments == 'y') {
                printf("Not eligible for loan.\n");
            } else {
                printf("Eligible for loan.\n");
            }
        } else {
            printf("Eligible for loan.\n");
        }
    } else {
        printf("Not eligible for loan.\n");
    }

    return 0;
}