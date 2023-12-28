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

    int max_frequency = 1;
    int most_frequent = arr[0];
    for (int i = 0; i < n; i++){
        int counter = 1;
        for (int j = i+1; j < n; j++) {
            if (arr[j] == arr[i]){
                counter++;
            }
        };
        if (counter > max_frequency){
            max_frequency = counter;
            most_frequent = arr[i];
        }
    }
    printf("Most frequent item: %d", most_frequent);
}