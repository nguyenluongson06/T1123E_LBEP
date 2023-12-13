#include <stdio.h> 
#include <math.h>

int main(){
    float height, weight;
    printf("Input your weight in kg: ");
    scanf("%f", &weight);
    printf("Input your height in m: ");
    scanf("%f", &height);
    double bmi = weight / (pow(height, 2));
    printf("Your BMI is: %f\n", bmi);
    if (bmi < 18.5){
        printf("You are underweight");
    } else if ((bmi >= 18.5) && (bmi < 24.9)){
        printf("You are at a healthy weight");
    } else if ((bmi >= 24.9) && (bmi < 29.9)){
        printf("You are overweight");
    } else {
        printf("You are obese");
    }
    return 0;
}