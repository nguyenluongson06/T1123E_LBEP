#include <stdio.h>

int main(){
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    float sum = 0;
    for (int i = 1; i <= num; i++){
        //float value = 1/i => value = 0 :)
        //you'd think float data type initialization & the obvious fraction should've done the trick, but NAHHHHH
        //this is why c sucks ass
        float value = 1.0/i;
        sum = sum + value;
    }
    printf("Sum: %f", sum);
    return 0;
}