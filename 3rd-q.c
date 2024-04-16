#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Enter a number (x): ");
    scanf("%lf", &x);

    // Compute square root using sqrt() function
    y = sqrt(x);
    printf("Square root of %.2f is %.2f\n", x, y);

    // Compute absolute value using fabs() function
    printf("Absolute value of %.2f is %.2f\n", x, fabs(x));

    // Compute sine using sin() function (expects radians)
    printf("Sine of %.2f radians is %.2f\n", x, sin(x));

    // Compute cosine using cos() function (expects radians)
    printf("Cosine of %.2f radians is %.2f\n", x, cos(x));

    // Compute natural logarithm using log() function
    printf("Natural logarithm of %.2f is %.2f\n", x, log(x));

    // Compute exponential value using exp() function
    printf("Exponential value of %.2f is %.2f\n", x, exp(x));

    return 0;
}
