#include <stdio.h>

int main(){
    //first, second and third number
    double fNum, sNum, tNum, average;

    printf("Please enter the first number: ");
    scanf("%lf", &fNum);
    printf("Please enter the second number: ");
    scanf("%lf", &sNum);
    printf("Please enter the third number: ");
    scanf("%lf", &tNum);

    if(fNum > sNum && fNum > tNum){
        printf("Maximum number is: %.2lf\n", fNum);
        if(sNum > tNum){
            printf("Minimum number is: %.2lf\n", tNum);
        }
        else printf("Minimum number is: %.2lf\n", sNum);
    }
    else if(sNum > fNum && sNum > tNum){
        printf("Maximum number is: %.2lf\n", sNum);
        if(fNum > tNum){
            printf("Minimum number is: %.2lf\n", tNum);
        }
        else printf("Minimum number is: %.2lf\n", fNum);
    }
    else if(tNum > fNum && tNum > sNum){
        printf("Maximum number is: %.2lf\n", tNum);
        if(fNum > sNum){
            printf("Minimum number is: %.2lf\n", sNum);
        }
        else printf("Minimum number is: %.2lf\n", fNum);
    }
    average = (fNum + sNum + tNum)/3;
    printf("Average: %.2lf", average);

    return 0;
}