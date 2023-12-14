#include <stdio.h>

int main() {
    int myBM;
    int myBD;
    int neighborBM;
    int neighborBD;

    printf("What is your Birth Day?\n");
    scanf("%d", &myBD);
    printf("What is your Birth Month?\n");   
    scanf("%d", &myBM);
    printf("What is your Friends Birth Day?\n");
    scanf("%d", &neighborBD);
    printf("What is your Friends Birth Month?\n");
    scanf("%d", &neighborBM);
    printf("Your birth day is: %d/%d and your friends birth day is %d/%d.", myBD, myBM, neighborBD, neighborBM);

    return 0;
}