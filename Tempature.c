#include <stdio.h>

int main(){
    int celcius;
    int fahrenheit;

    printf("Welcome to the Tempature Changer!!\n Please input a value: ");
    scanf("%d", &celcius);
    fahrenheit = celcius * 1.8 + 32;
    printf("%d celcius is equal to %d fahrenheit.", celcius, fahrenheit);
}