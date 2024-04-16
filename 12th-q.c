#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; // Declare character arrays to store strings

    // Prompt user to enter two strings
    printf("Enter the first string: ");
    scanf("%s", str1); // Read the first string (assuming no spaces)

    printf("Enter the second string: ");
    scanf("%s", str2); // Read the second string (assuming no spaces)

    // Display the entered strings
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    // Demonstrate string length function (strlen)
    printf("Length of first string: %lu\n", strlen(str1)); // Print length of first string
    printf("Length of second string: %lu\n", strlen(str2)); // Print length of second string

    // Demonstrate string comparison function (strcmp)
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // Demonstrate string concatenation function (strcat)
    strcat(str1, str2); // Concatenate second string to the end of first string
    printf("Concatenated string: %s\n", str1);

    // Demonstrate substring extraction function (strncpy)
    char substr[100];
    strncpy(substr, str1, 5); // Copy first 5 characters of concatenated string to substr
    substr[5] = '\0'; // Ensure substr is null-terminated
    printf("Substring of concatenated string: %s\n", substr);

    return 0;
}
