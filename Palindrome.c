#include <stdio.h>
#include <string.h>

int main(){
    char *word1 = "madam";
    char *word2 = "tucan";

    printf("%s%s%s\n", word1, isPalindrome(word1)? " is a ":" is not a ", "palindrome.");
    printf("%s%s%s\n", word2, isPalindrome(word2)? " is a ":" is not a ", "palindrome.");
    return 0;
}

int isPalindrome(char str[]){
    int f = 0;
    int l = strlen(str) - 1;

    for(; l > 1;  f++, l--){
        if(str[f] != str[l]) return 0;       
    }

    return 1;
}