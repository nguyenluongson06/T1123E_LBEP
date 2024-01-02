#include <stdio.h>
#include <string.h>

// bubble sort array of string
void bubbleSortStrings(char arr[][100], int size) {
    char temp[100];

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap arr[j] and arr[j + 1]
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// print array of string with given size
void printStringArray(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int size;

    printf("Enter the number of strings: ");
    scanf("%d", &size);

    char strings[size][100];

    for (int i = 0; i < size; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    bubbleSortStrings(strings, size);

    printf("\nSorted array of strings:\n");
    printStringArray(strings, size);

    return 0;
}
