#include <stdio.h>

int main(){
    int a;
    int grade[101] = {0};

    while(1){        
        printf("Enter a value (-1 to quit): ");
        scanf("%d", &a);

        if(a == -1) break;
        grade[a]++;
    }

    for(int i = 0; i < 101; i++){
        if(grade[i] != 0){
            printf("%d: ", i);
            for(int j = 0; j < grade[i]; j++) printf("*");
            printf("\n");
        }
    }
}