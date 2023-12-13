#include <stdio.h>
#include <math.h>

int main(){
    printf("Input the year to be checked: ");
    int year;
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is a gap year", year);
    } else {
        printf("%d is not a gap year", year);
    }
    return 0;
}