#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n;
    
    printf("Enter the number of prime numbers to generate: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return 1; 
    }
    
    printf("The first %d prime numbers are:\n", n);
    
    int count = 0;
    int num = 2; 
    
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++; 
    }
    
    printf("\n");
    
    return 0;
}
