#include <stdio.h>
#include <math.h>

double negpow(double a, double b){
    double result = pow(a, b);
    return result;
}

int main(){
    double fN, sN;
    printf("Enter a number and times: ");
    scanf("%lf %lf", &fN, &sN);
    printf("%.2lf", negpow(fN, sN));
}
