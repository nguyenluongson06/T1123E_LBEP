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

    printf("All duplicated items: ");
    int index = 0;
    while (index < n){
        int counter = 1;
        int inner_index = index + 1;
        while (inner_index < n){
            if (arr[inner_index] == arr[index]){
                counter++;
            }
            inner_index++;
        }
        if (counter > 1) {
            printf("%d ", arr[index]);
        }
        index++;
    }
    return 0;
}