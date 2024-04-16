#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Declare a pointer to an integer
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value of ptr (address of num): %p\n", (void *)ptr);
    printf("Value at the address stored in ptr: %d\n", *ptr);

    *ptr = 20;
    printf("Updated value of num: %d\n", num);
    incrementByValue(ptr);
    printf("Value of num after incrementing by 5: %d\n", num);

    return 0;
}

void incrementByValue(int *ptr) {
    *ptr += 5; // Increment the value at the address stored in ptr by 5
}
