#include <stdio.h>

//return 1 if item is in array, 0 otherwise
int isInArray(int array[], int size, int item){
    for (int i = 0; i < size; i++){
        if (array[i] == item){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[9] = {1,5,534,13,63,42512,54,879,3241};
    int item = 10;
    int result = isInArray(arr, 9, item);
    if (result == 1){
        printf("%d is in the given array", item);
    } else {
        printf("%d is not in the given array", item);
    }
    return 0;
}