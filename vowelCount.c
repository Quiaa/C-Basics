#include <stdio.h>

int main(){
    char string[] = "i feel, therefore i am";
    int counts[5] = {0};
    char vowels[] = "aeiou";

    vowelCount(string, counts);

    for(int i = 0; i < 5; i++) printf("the number of %c = %d \n", vowels[i], counts[i]);

}

void vowelCount(char *sPtr, int count[]){
    int lenght = 22;
    char *f_ptr;
    f_ptr = sPtr;

    while(*f_ptr != '\0'){
        if(*f_ptr == 'a') count[0]++;
        else if(*f_ptr == 'e') count[1]++;
        else if(*f_ptr == 'i') count[2]++;
        else if(*f_ptr == 'o') count[3]++;
        else if(*f_ptr == 'u') count[4]++;
        f_ptr++;
    }
}