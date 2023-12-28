#include <stdio.h>
#include <math.h>

bool isPrime(int x){
    if (x<2){
        return false;
    } else if (x<=3){
        return true;
    } else {
        for (int i = 2; i <= sqrt(x); i++){
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
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

    int max = 0;
    for (int i = 0; i < n; i++){
        if (isPrime(arr[i]) && (arr[i]>max)){
            max = arr[i];
        }
    }

    if (max == 0){
        printf("No prime number found");
    } else {
        printf("Max prime number: %d", max);
    }
    return 0;
}