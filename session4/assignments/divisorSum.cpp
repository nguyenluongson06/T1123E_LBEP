#include <stdio.h>

int main(){
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    int sum = n;
    for (int i = 1; i <= (n/2); i++){
        if (n % i == 0){
            sum += i;
        }
    }
    printf("Sum of all %d's divisor are: %d", n, sum);
    return 0;
}