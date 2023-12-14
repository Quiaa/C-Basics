#include <stdio.h>

int main(){

    double xCor, yCor;

    printf("Enter a x value: ");
    scanf("%lf", &xCor);
    printf("Enter a y value: ");
    scanf("%lf", &yCor);

    if(xCor > 0){
        if(yCor > 0){
            printf("The quadrant of this point is 1.");
        }
        else if(yCor < 0){
            printf("The quadrant of this point is 4.");
        }
        else printf("The quadrant of this point is not exist.");
    }
    else if (xCor < 0){
        if (yCor > 0){
            printf("The quadrant of this point is 2.");
        }
        else if (yCor < 0){
            printf("The quadrant of this point is 3.");
        }
        else printf("The quadrant of this point is not exist.");
    }
    else printf("The quadrant of this point is not exist.");

    return 0;
}