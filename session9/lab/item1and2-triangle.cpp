#include <stdio.h>
#include <math.h>

//tinh chu vi tam giac
int triangleParameter(int a, int b, int c){
    return (a + b + c);
}

//tinh dien tich tam giac
float triangleArea(int a, int b, int c){
    int parameter = triangleParameter(a,b,c);
    float halfParameter = parameter/2.0;
    return (sqrt(halfParameter * (halfParameter - a) * (halfParameter - b) * (halfParameter - c)));
}