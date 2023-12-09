//in case the flowchart.png is too hard to see, please check the link to the flowchart provided in flowchartBackupLink.md

#include <stdio.h>
#include <math.h>
#include <tuple>

bool isTriangle(int a, int b, int c){
    return ((a + b > c) && (a + c > b) && (b + c > a));
}

struct Triangle{
    int Perimeter;
    double Area;
};

Triangle calculate(int a, int b, int c){
    Triangle newTriangle;
    newTriangle.Perimeter = a + b + c;
    double halfPerimeter = newTriangle.Perimeter / 2;
    newTriangle.Area = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    return newTriangle;
}

int main(){
    int a,b,c;
    printf("Input first value:");
    scanf("%d", &a);
    printf("Input second value:");
    scanf("%d", &b);
    printf("Input third value:");
    scanf("%d", &c);
    if (isTriangle(a,b,c)){
        printf("%d, %d and %d can form a triangle with the following values:\n", a, b, c);
        Triangle newTriangle = calculate(a,b,c);
        printf("Perimeter: %d\n", newTriangle.Perimeter);
        printf("Area: %f", newTriangle.Area);
    }
    else 
    {
        printf("%d, %d and %d can't form a triangle", a, b, c);
    }
    return 0;
}