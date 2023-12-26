#include <stdio.h>
#include <math.h>

int main(){
    int arr[1000]; //C does not allow dynamic array, so...
    int n, x;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Input item %d:", i);
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    printf("Input x:");
    scanf("%d", &x);
    int item = arr[0];
    int min_distance = abs(arr[0] - x);
    

    for (int i = 1; i < n; i++){
        if (abs(arr[i] - x) < min_distance){
            item = arr[i];
            min_distance = abs(item - x);
        }
    }

    printf("Value closest from x in array: %d", item);
    return 0;
}