#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    printf("Enter numbers continuously (enter 999 to stop):\n");
    while (1) {
        scanf("%d", &num);

        if (num == 999) {
            break;
        }

        if (num > 0) {
            sum += num;
        }
    }
    printf("Sum of positive numbers entered: %d\n", sum);

    return 0;
}
