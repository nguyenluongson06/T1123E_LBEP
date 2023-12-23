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
    int max_sequence_length = 0;
    while (index < n){
        if (arr[index] > 0){
            int length = 0;
            while (arr[index] > 0 && index < n){
                length++;
                index++;
            }
            if (length > max_sequence_length){
                max_sequence_length = length;
            }
        } else {
            index++;
        }
    }
    printf("Longest positive sequence length: %d", max_sequence_length);
    return 0;
}