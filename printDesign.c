#include <stdio.h>

int main(){
    int x = 5;
    for(int i = 1 ;i <= 9; i += 2){ // 1 3 5 7 9
        for (int j = 1; j <= x; j++) printf("-");
        for (int m = 1; m <= i; m++) printf("%d", i);
        for (int k = 1; k <= x ; k++) printf("-");
        printf("\n");
        x--;
    }
}   