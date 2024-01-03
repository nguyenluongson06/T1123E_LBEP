#include <stdio.h>

/// @brief find greatest common divisor of 2 ints
/// @param a first int
/// @param b second int
/// @return greatest common divisor of a and b
int GCD(int a, int b){
    int res = a > b ? b : a;
    while (res != 0){
        a = b;
        b = res;
        res = a % b;
    }
    return b;
}

/// @brief find GCD of an array
/// @param arr the array to find
/// @param size array size
/// @return GCD of the given array
int arrayGCD(int arr[], int size){
    int result = GCD(arr[0], arr[1]);
    for (int i = 2; i < size; i++){
        result = GCD(result, arr[i]);
    }
    return result;
}

int main(){
    int arr[9] = {1,5,534,13,63,42512,54,879,3241};
    printf("%d", arrayGCD(arr, 9));
    return 0;
}