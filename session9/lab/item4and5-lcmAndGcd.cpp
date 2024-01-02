#include <stdio.h>

//tim uoc chung lon nhat
int GCD(int a, int b){
    int res = a > b ? b : a;
    while (res != 0){
        a = b;
        b = res;
        res = a % b;
    }
    return b;
}

//tim boi chung nho nhat
int LCM(int a, int b){
    int gcd = GCD(a,b);
    return ((a*b)/gcd);
}