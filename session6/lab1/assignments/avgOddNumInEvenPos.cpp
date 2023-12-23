#include <stdio.h>

int main(){
    int arr[1000]; //C does not allow dynamic array, so...
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Input item %d:", i);
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++) //this assume even index in a zero-based index array
    {
        if (arr[i] % 2 == 1 && i % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }

    printf("Avg of all odd numbers in even position: %f", sum/count);
    return 0;
}