
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (signbit(discriminant) ? -1 : (discriminant > 0)) {
        case -1:
            printf("The quadratic equation has imaginary roots.\n");
            break;
        case 0:
            root1 = root2 = -b / (2 * a);
            printf("The quadratic equation has real and equal roots:\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
            break;
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The quadratic equation has real and distinct roots:\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
    }

    return 0;
}
