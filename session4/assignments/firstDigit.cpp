#include <stdio.h>

int main(){
    //fuck it, I'm not making a high-performance program anyway
    //no dynamic type sucks
    char str[50];
    printf("Enter the number: ");
    scanf("%s", &str);
    char result = str[0];
    printf("First digit of given number: %c", result);
    return 0;
}