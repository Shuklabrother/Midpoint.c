#include <stdio.h>

int main() {
    
    double num1, num2, midpoint;
    printf("Enter value of X1:");
    scanf("%lf", &num1);
    printf("Enter value of X2:");
    scanf("%lf", &num2);
    midpoint = (num1+num2)/2;
    printf("Midpoint is %lf", midpoint);
    return 0;
}
    
