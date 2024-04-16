#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

void countStringStatistics(const char *str) {
    int alphabets = 0, digits = 0, vowels = 0, consonants = 0, spaces = 0, special_chars = 0;


    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            alphabets++;
        
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        } else {
            special_chars++;
        }
    }


    printf("Number of Alphabets: %d\n", alphabets);
    printf("Number of Digits: %d\n", digits);
    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);
    printf("Number of Spaces: %d\n", spaces);
    printf("Number of Special Characters: %d\n", special_chars);
}

int main() {
    char str[MAX_SIZE];


    printf("Enter a string (max %d characters): ", MAX_SIZE - 1);
    fgets(str, sizeof(str), stdin);


    countStringStatistics(str);

    return 0;
}
