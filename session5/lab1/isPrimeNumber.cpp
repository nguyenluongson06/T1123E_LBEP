#include <stdio.h>
#include <math.h>

bool isPrime(int x){
    if (x<2){
        return false;
    } else if (x<=3){
        return true;
    } else {
        for (int i = 2; i <= sqrt(x); i++){
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(){
    int num;
    printf("Input num: ");
    scanf("%d", &num);
    if (isPrime(num)){
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }
}