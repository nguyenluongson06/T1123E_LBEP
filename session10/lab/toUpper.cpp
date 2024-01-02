#include <stdio.h>
#include<string.h>

void toUpper(char input[]){
    int length = strlen(input);
    for (int i = 0; i < length; i++){
        if ('a' <= input[i] && input[i] <= 'z'){
            input[i] = input[i] - 32;
        }
    }
    return;
}

int main(){
    char str[100];
    printf("Input string: ");
    scanf("%s", str);
    toUpper(str);
    printf("%s", str);
}