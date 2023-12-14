#include <stdio.h>

int main(){

    int max, min;
    float fNum, sNum, tNum, average;
    printf("Please enter the first number: ");
    scanf("%f", &fNum);
    printf("Please enter the second number: ");
    scanf("%f", &sNum);
    printf("Please enter the third number: ");
    scanf("%f", &tNum);
    max = fNum;
    min = fNum;
    if(sNum>max){
        max = sNum;
    }
    if(tNum>max){
        max = tNum;
    }
    if(sNum<min){
        min = sNum;
    }
    if(tNum<min){
        min = tNum;
    }
    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);
    average = (fNum + sNum + tNum)/3;
    printf("Average: %f", average);
    return 0;
}