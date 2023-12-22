#include <stdio.h>
#include <math.h>

bool isTriangle(int a, int b, int c){
    return ((a+b>c) && (b+c>a) && (a+c>b));
}

int Perimeter(int a, int b, int c){
    return a+b+c;
}

float Area(int a, int b, int c){
    int p = Perimeter(a,b,c);
    float p_half = p/2.0;
    return (sqrt(p_half * (p_half - a) * (p_half - b) * (p_half - c)));
}

int main(){
    int a,b,c = 0;
    while (!isTriangle(a,b,c)){
        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);
        printf("Enter c: ");
        scanf("%d", &c);
        if (!isTriangle(a,b,c)){
            printf("%d,%d and %d cannot form a triangle, please re-enter\n", a, b, c);
        }
    }
    printf("Perimeter: %d\n", Perimeter(a,b,c));
    printf("Area: %f", Area(a,b,c));
    return 0;
}

