#include <stdio.h>

int main() {
    int age;
    double weight;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter weight (in kg): ");
    scanf("%lf", &weight);

    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("Eligible to donate blood.\n");
        } else {
            printf("Not eligible to donate blood due to weight.\n");
        }
    } else {
        printf("Not eligible to donate blood due to age.\n");
    }

    return 0;
}