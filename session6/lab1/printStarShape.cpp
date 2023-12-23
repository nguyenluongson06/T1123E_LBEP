#include <stdio.h>

void firstTree(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("*");
        };
        printf("\n");
    }
}

void secondTree(){
    for (int i = 0; i < 5; i++){
        if (i%2 == 0){
            printf("*****\n");
        } else {
            printf("****\n");
        }
    }
}


void thirdTree(){
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j < i; j++) {
            printf("*");
        };
        printf("\n");
    }
}

void fourthTree(){
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++){
            for (int k = 1; k<=i; k++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    firstTree();
    printf("\n");
    secondTree();
    printf("\n");
    thirdTree();
    printf("\n");
    fourthTree();
    return 0;
}