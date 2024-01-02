#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Input string: ");
    scanf("%s", str);
    printf("Reversed string: %s", strrev(str));
    return 0;
}