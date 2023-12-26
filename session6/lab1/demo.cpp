#include <stdio.h>

int main(){
    int n;
    printf("input n: ");
    scanf("%d", &n);
    int array[1000];//this has no dynamic array
    //input
    for (int i = 0; i < n; i++){
        int temp;
        printf("input item %d: ", i+1);
        scanf("%d", &temp);
        array[i] = temp;
    }
    //loop
    int max = array[0];
    int second_max;
    if (array[1] > max) {
        max = array[1];
        second_max = array[0];
    } else if (array[1] == max) {
        max = array[0];
        int i = 1;
        while (array[i] == max && i < n){
            i++;
        }
        second_max = array[i];
    }
    for (int i = 2; i < n; i++){
        if (array[i] > max){
            second_max = max;
            max = array[i];
        } else if (second_max < array[i] && array[i] < max){
            second_max = array[i];
        }
    }
    printf("Second max: %d", second_max);
    return 0;
}