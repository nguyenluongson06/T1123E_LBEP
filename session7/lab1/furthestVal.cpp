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
    int max_distance = abs(arr[0] - x);
    

    for (int i = 1; i < n; i++){
        if (abs(arr[i] - x) > max_distance){
            item = arr[i];
            max_distance = abs(item - x);
        }
    }

    printf("Value furthest from x in array: %d", item);
    return 0;
}