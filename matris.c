#include <stdio.h>

int main(){

    int a[3][2] = {{0, 2}, {1, 0}, {4, 8}};
    int b[3][2] = {{0}, {7, 3}, {4, 2}};
    int c[3][2] = {{0}, {0}, {0}};

    matrixAdd(a, b, c, 3, 2);
}

void matrixAdd(int a[][2], int b[][2], int c[][2], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}