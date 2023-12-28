#include <stdio.h>
#include <math.h>

bool isTriangle(int a, int b, int c){
    return ((a+b>c) && (b+c>a) && (a+c>b));
}

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

    printf("All 3 consecutive numbers that can form a triangle: \n");

    for (int i = 0; i < n-2; i++){
        if (isTriangle(arr[i], arr[i+1],arr[i+2])){
            printf("%d, %d, %d\n", arr[i], arr[i+1], arr[i+2]);
        }
    }

    return 0;
}