#include <stdio.h>

int longestSortedSequence(int list[], int size){
    int count = 1;
    int temp = 0;
    for(int i = 0; i<size; i++){
        if(list[i+1] > list[i]) count++;
        if(count > temp) temp = count;
        if(list[i+1] < list[i]) count = 1;
    }
    if(size = 0) temp = 0;
    return temp;
}

int main(){
    int list[] = {3, 8, 10, 1, 9, 14, -3, 0, 14, 207, 56, 98, 12};
    int size = sizeof(list) / sizeof(list[0]);

    printf("%d", longestSortedSequence(list, size));
}
