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

    int index = 0;
    int max_positive_sum = 0;
    while (index < n){
        if (arr[index] > 0){
            int sum = 0;
            while (arr[index] > 0 && index < n){
                sum = sum + arr[index];
                index++;
                
            }
            if (sum > max_positive_sum){
                max_positive_sum = sum;
            }
        } else {
            index++;
        }
    }
    printf("Largest sum of sequence of positive number: %d", max_positive_sum);
    return 0;
}