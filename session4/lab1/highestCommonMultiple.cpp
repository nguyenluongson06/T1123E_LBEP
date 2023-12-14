#include <stdio.h>

int main(){
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    int result = n;
    do
    {
        result--;
    } while ((result % 2 != 0) && (result % 3 != 0));
    printf("%d", result);
}