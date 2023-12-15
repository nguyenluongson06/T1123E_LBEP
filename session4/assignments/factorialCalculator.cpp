#include <stdio.h>

int main(){
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    int result = 1;
    //memory overflowing is a given
    //but fuck it, not my problem
    for (int i = 2; i <= num; i++){
        result = result * i;
    }
    printf("Result: %d", result);
}