#include <stdio.h>

int main(){
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    printf("All of %d's divisor are: \n", n);
    for (int i = 1; i <= (n/2); i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}