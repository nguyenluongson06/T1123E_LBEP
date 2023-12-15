#include <stdio.h>

int main(){
    //fuck it, I'm not making a high-performance program anyway
    //no dynamic type sucks
    char str[50];
    printf("Enter the number: ");
    scanf("%s", &str);
    int sum = 0;
    for(int i = 0; i < 50; i++){
        if ((str[i] >= '0') && (str[i] <= '9')){
            sum += str[i] - '0';
        }
    }
    printf("Sum of all digits in the given number: %d", sum);
    return 0;
}