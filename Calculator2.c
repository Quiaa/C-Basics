#include <stdio.h>

int main()
{
	double x, y, res;
    int process;
	
	do{
        printf("Select an option: \t (Multiply: 1. Divide: 2.  Plus: 3. Minus: 4.)\n");
        scanf("%d", &process);
    }   while(process > 5 && process < 0);
	
	printf("Enter the X value: ");
	scanf("%lf", &x);
	printf("Enter the Y value: ");
	scanf("%lf", &y);


	if(process == 1)
	{
		res = x * y;
	}
	else if(process == 2)
	{
		res = x / y;
	}
	else if(process == 3)
	{
		res = x + y;
	}
	else if(process == 4)
	{
		res = x - y;
	}
	
	printf("Equal to: %.2lf",res);
	return 0;
}