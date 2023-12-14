#include <stdio.h>

void reverseString(char *sPtr){
    int lenght = 7;
    char *f_ptr, *l_ptr, temp;
    f_ptr = sPtr;
    l_ptr = sPtr;
    
    for(int i = 0; i < lenght - 1; i++) l_ptr++;
    for(int i = 0; i < lenght/2; i++, f_ptr++, l_ptr--){
        temp = *f_ptr;
        *f_ptr = *l_ptr;
        *l_ptr = temp;
    }    
}

int main(){
    char string[] = "I feel!";

    reverseString(string);

    printf("\n%s", string); // !leef I
}

