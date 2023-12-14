#include <stdio.h>

int main(){
    int day = 1, month = 1, year = 1; // trash numbers
    int nDay = 1, nMonth = 1, nYear = 1;
    // 31 day months    1  3  5  7  8  10   12
    // 30 day months    4  6  9  11

    while(!(day == 0 && month == 0 && year == 0)){
        printf("Enter a date (0 0 0 to quit): ");
        scanf("%d %d %d", &day, &month, &year);

        while((month == 2 && day > 28 && !(year%4 == 0)) || (month == 2 && year%4 == 0 && day > 29) ||  ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || (day > 31 || month > 12)){
            printf("This is not a valid date!\n");
            printf("Enter a date (0 0 0 to quit): ");
            scanf("%d %d %d", &day, &month, &year);
        }

        if(month == 2){ // in February
            if(day == 28){ // for 28 day Februarys
                if(year%4 == 0) { // checking if its 29
                    nDay = day + 1;
                    nMonth = month;
                    nYear = year;
                }
                else{
                    nMonth = month + 1;
                    nDay = 1;
                    nYear = year;
                }
            }
            else if(day == 29){ // for 29 day Februarys. When its %4 is 0
                nMonth = month + 1;
                nDay = 1;
                nYear = year;
            }
            else{
                nDay = day + 1;
                nMonth = month;
                nYear = year;
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){ // months with 30 days
            if(day == 30){
                nMonth = month + 1;
                nDay = 1;
                nYear = year;
            }
            else{
                nDay = day + 1;
                nMonth = month;
                nYear = year;
            }
        }
        else{                                                 // months with 31 days
            if(month == 12 && day == 31){ // for Year
                nDay = 1;
                nMonth = 1;
                nYear = year + 1;
            }
            else if(day == 31){
                nMonth = month + 1;
                nDay = 1;
                nYear = year;
            }
            else{
                nDay = day + 1;
                nMonth = month;
                nYear = year;
            }
        }
        if(day != 0 && month != 0 && year != 0) printf("The next day of %02d.%02d.%d is %02d.%02d.%d\n", day, month, year, nDay, nMonth, nYear); // output
    }
    
    printf("Thanks for using our calendar!"); // end of the code

}