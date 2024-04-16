#include <stdio.h>

int main() {
    int n;
    float marks[100]; // Array to store marks (assuming max 100 students)
    float sum = 0.0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of students. Please enter a number between 1 and 100.\n");
        return 1; 
    }

    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0) {
            printf("Invalid marks. Please enter a non-negative value.\n");
            i--;
        } else {
            sum += marks[i]; 
        }
    }
    average = sum / n;
    printf("Average marks of %d students: %.2f\n", n, average);
    return 0;
}
