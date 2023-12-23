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
    int x;
    printf("Input x: ");
    scanf("%d", &x);

    int isPresent = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            isPresent = 1;
            break;
        }
    }

    if (isPresent == 1){
        printf("%d is present in the given array");
    } else {
        printf("%d is not present in the given array");
    }
}