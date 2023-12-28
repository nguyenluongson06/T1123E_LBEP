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

    int positive_count = 0;
    int negative_count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            positive_count++;
        } else if (arr[i] < 0){
            negative_count++;
        }
    }

    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d", negative_count);
}