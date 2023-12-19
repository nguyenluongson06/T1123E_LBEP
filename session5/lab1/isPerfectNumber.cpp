#include <stdio.h>
#include <math.h>

bool isPerfect(int num){
    int sum = 1;
    for (int i = 2; i <= (num/2); i++){
        if (num % i == 0){
            sum += i;
        }
    }
    return num == sum;
}

int main(){
    int num;
    printf("Input num: ");
    scanf("%d", &num);
    if (isPerfect(num)){
        printf("%d is a perfect number", num);
    } else {
        printf("%d is not a perfect number", num);
    }
}