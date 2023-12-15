#include <stdio.h>
#include <math.h>

int highestCommonFactor(int a, int b){
    while (b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a,b;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    int hcf = highestCommonFactor(a, b);
    int lcm = a*b / hcf;
    printf("HCF: %d; LCM: %d", hcf, lcm);
    return 0;
}