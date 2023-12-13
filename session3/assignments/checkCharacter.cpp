#include <stdio.h>

int main(){
    char input;
    printf("Enter the character to check: ");
    scanf("%c", &input);
    if ((input >= 'A') && (input <= 'Z')){
        printf("The given character is an uppercase letter");
    } else if ((input >= 'a') && (input <= 'z')){
        printf("The given character is a lowercase letter");
    } else if ((input >= '0') && (input <= '9')){
        printf("The given character is a number");
    } else {
        printf("The given character is a symbol");
    };
    return 0;
}