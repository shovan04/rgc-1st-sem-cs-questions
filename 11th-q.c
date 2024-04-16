#include <stdio.h>

// Function to remove duplicate elements from an array
int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size;
    }
    int index = 0; 

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i];
        }
    }

    arr[index++] = arr[size - 1];

    return index;
}

int main() {
    int arr[100];
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    if (n <= 0 || n > 100) {
        printf("Invalid number of elements. Please enter a number between 1 and 100.\n");
        return 1;
    }

   
    printf("Enter %d elements into the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int newSize = removeDuplicates(arr, n);

   
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
