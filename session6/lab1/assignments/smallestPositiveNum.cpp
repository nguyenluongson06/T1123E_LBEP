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

    int count = -1;
    int min = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            min = arr[i];
            count = i;
            break;
        }
    }

    if (count == -1) {
        printf("No number in array is positive");
    } else {
        while (count < n){
            if (arr[count] < min && arr[count] > 0){
                min = arr[count];
            }
            count++;
        }
        printf("Smallest positive num: %d", min);
    }
    return 0;
}