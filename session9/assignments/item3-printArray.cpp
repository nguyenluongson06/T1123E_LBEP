#include <stdio.h>

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
    printf("All values in array: ");
    printArray(arr, 9);
    return 0;
}