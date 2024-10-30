#include <stdio.h>

int main() {
    double mathScore, scienceScore;

    printf("Enter Math score: ");
    scanf("%lf", &mathScore);

    printf("Enter Science score: ");
    scanf("%lf", &scienceScore);

    if (mathScore >= 50 && scienceScore >= 50) {
        printf("Eligible for admission.\n");
        if (mathScore > 80 && scienceScore > 80) {
            printf("Qualifies for a scholarship.\n");
        } else {
            printf("Does not qualify for a scholarship.\n");
        }
    } else {
        printf("Not eligible for admission.\n");
    }

    return 0;
}