#include <stdio.h>

int main(){
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    if (num == 0){
        printf("Pos: 1");
    } else if (num == 1){
        printf("Pos: 2");
    } else {
        int a = 0; 
        int b = 1;
        int pos = 2;
        while (b<num){
            int temp = a + b;
            a = b;
            b = temp;
            pos++;
        }
        if (b == num){
            printf("Pos: %d", pos);
        } else {
            printf("%d does not exist in the Fibonacci sequence", num);
        }
    }
    return 0;
}