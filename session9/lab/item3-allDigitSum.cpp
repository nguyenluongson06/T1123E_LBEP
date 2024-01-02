//tinh tong chu so cua 1 so nguyen
int allDigitSum(int a){
    int sum = 0;
    while (a > 0){
        sum += a % 10;
        a = a / 10;
    }
    return sum;
}
//parse truc tiep tu char -> num se ho tro so co chieu dai lon hon