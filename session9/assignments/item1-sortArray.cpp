#include <stdio.h>

//bubble sort
void sort(int arr[], int size){
    int temp;
    int swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = 0; 

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; 
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}

int main(){
    int arr[9] = {1,5,534,13,63,42512,54,879,3241};
    sort(arr, 9);
    for (int i = 0; i < 9; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}