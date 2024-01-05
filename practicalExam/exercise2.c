#include <stdio.h>

/// @brief calculate array avg
/// @param s array of int
/// @param n array size
/// @return avg
float average(int s[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += s[i];
    }
    return (sum/(n * 1.0));
}

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //use %g to automatically remove the redundant 0s
    printf("Average: %g", average(arr, n));
    return 0;
}