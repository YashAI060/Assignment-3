#include <stdio.h>

int main() {
    double marks1, marks2, marks3, average;

    printf("Enter marks for subject 1: ");
    scanf("%lf", &marks1);
    
    printf("Enter marks for subject 2: ");
    scanf("%lf", &marks2);
    
    printf("Enter marks for subject 3: ");
    scanf("%lf", &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    if (average >= 50) {
        printf("Status: Pass\n");
        if (average >= 90) {
            printf("Grade: A\n");
        } else if (average >= 75) {
            printf("Grade: B\n");
        } else if (average >= 60) {
            printf("Grade: C\n");
        } else {
            printf("Grade: D\n");
        }
    } else {
        printf("Status: Fail\n");
    }

    return 0;
}