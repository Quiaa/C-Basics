#include <stdio.h> 

int main(){

    int workTime;
    int hourlyWage;
    int wage;

    printf("Enter how many hours your employee works: \n");
    scanf("%d", &workTime);
    printf("What is the hourly wage?($)");
    scanf("%d", &hourlyWage);

    if(workTime > 40)
    {
        wage = 40 * hourlyWage + ((workTime - 40) * hourlyWage * 1.5);
    }
    else
    {
        wage = workTime * hourlyWage;
    }
    printf("Your employees wage is: %d", wage);
    return 0;
}