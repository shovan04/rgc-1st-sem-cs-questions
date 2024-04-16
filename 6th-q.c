#include <stdio.h>


int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;
}


int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10; 
        num /= 10; 
    }
    return reversedNum;
}


int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = reverseNumber(num);
    return (originalNum == reversedNum);
}

int main() {
    int number;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    int sum = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, sum);

    
    int reversed = reverseNumber(number);
    printf("Reversed number of %d is: %d\n", number, reversed);

    
    if (isPalindrome(number)) {
        printf("%d is a palindrome!\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
