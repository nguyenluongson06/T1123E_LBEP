#include <stdio.h>

int main(){
    //fuck it, I'm not making a high-performance program anyway
    //no dynamic type sucks
    char str[50];
    printf("Enter the number: ");
    scanf("%s", &str);
    char result = str[0];
    for(int i = 1; i < 50; i++){
        if ((str[i] >= '0') && (str[i] <= '9') && (str[i] > result)){
            result = str[i];
        }
    }
    printf("Highest digit of given number: %c", result);
    return 0;
}