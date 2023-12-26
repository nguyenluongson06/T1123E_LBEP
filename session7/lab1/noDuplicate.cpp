#include <stdio.h>
#include <math.h>

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

    //no handy overload in C -> brute force with 2 nested for loops
    for (int i = 0; i < n - 1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                printf("Array contains duplicated values");
                return 0;
            }
        }
    }
    printf("Array does not contain duplicated values");
    return 0;
}