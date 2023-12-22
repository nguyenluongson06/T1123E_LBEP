#include <stdio.h>

int main(){
    int num = 0;
    while (!((num >=1) && (num <= 100)))
    {
        printf("Input number: ");
        scanf("%d",&num);
        if ((num >=1) && (num <= 100)){
            printf("Your number satisfied the condition\n");
        } else {
            printf("Your number did not satisfy the condition, please re-enter\n");
        }
    }
    return 0;
}