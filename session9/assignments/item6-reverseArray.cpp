#include <stdio.h>

/// @brief reverse the given array
/// @param arr array to reverse
/// @param size array size
void reverseArray(int arr[], int size){
    for (int i = 0; i < (size/2); i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    return;
}

/// @brief print the array to the output
/// @param array the array to print
/// @param size array size
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    return;
}

int main(){
    int arr[9] = {1,5,534,13,63,42512,54,879,3241};
    reverseArray(arr, 9);
    printArray(arr, 9);
    return 0;
}