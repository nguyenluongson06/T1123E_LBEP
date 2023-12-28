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
    
    printf("Array reversed: ");
    for (int i = n - 1; i >= 1; i--)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d", arr[0]);
}