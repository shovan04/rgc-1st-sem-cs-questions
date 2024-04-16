#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 90.0) {
        printf("Excellent! You scored an 'A' grade.\n");
    } else if (percentage >= 80.0) {
        printf("Very good! You scored a 'B' grade.\n");
    } else if (percentage >= 70.0) {
        printf("Good! You scored a 'C' grade.\n");
    } else if (percentage >= 60.0) {
        printf("Fair! You scored a 'D' grade.\n");
    } else if (percentage >= 50.0) {
        printf("Average! You scored an 'E' grade.\n");
    } else {
        printf("Sorry! You failed with an 'F' grade.\n");
    }

    return 0;
}
