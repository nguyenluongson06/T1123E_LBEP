#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Input first value:");
    scanf("%d", &a);
    printf("Input second value:");
    scanf("%d", &b);
    printf("Input third value:");
    scanf("%d", &c);
    double delta = pow(b,2) - 4*a*c;
    if (delta < 0)
    {
        printf("The given equation has imaginary roots");
    } 
    else if (delta == 0)
    {
        double root = (-b)/(2*a);
        printf("The given equation has 1 non-imaginary root: %f", root);
    } 
    else 
    {
        double root_1 = ((-b) + sqrt(delta))/(2*a);
        double root_2 = ((-b) - sqrt(delta))/(2*a);
        printf("The given equation has 2 following non-imaginary roots:\n");
        printf("%f\n", root_1);
        printf("%f\n", root_2);
    }
    return 0;
}