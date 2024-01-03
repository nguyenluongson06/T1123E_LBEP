#include <stdio.h>

float avg(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (sum/(size*1.0));
}

int main(){
    int arr[9] = {1,5,534,13,63,42512,54,879,3241};
    printf("%f", avg(arr, 9));
    return 0;
}