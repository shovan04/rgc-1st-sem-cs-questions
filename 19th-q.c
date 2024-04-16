#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (str == NULL) {
        return;
    }

    int length = strlen(str);


    char *start = str;
    char *end = str + length - 1;


    while (start < end) {
    
        char temp = *start;
        *start = *end;
        *end = temp;

    
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
