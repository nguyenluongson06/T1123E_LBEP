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

    for (int i = n-1; i >= 0; i--){
        if (arr[i] % 2 == 1){
            printf("Last odd number: %d", arr[i]);
            return 0;
        }
    }
    printf("Array has no odd number");
    return 0;
}