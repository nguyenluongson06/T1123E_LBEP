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
    int max = abs(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) > max){
            max = abs(arr[i]);
        }
    }
    printf("Range: [-%d, %d]", max, max);
    return 0;
}